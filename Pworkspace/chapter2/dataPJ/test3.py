from bokeh.plotting import figure, show, output_notebook
from bokeh.models import TapTool, CustomJS, ColumnDataSource
import pandas as pd

# Jupyter Notebook 환경에서 직접 표시하기 위한 설정
output_notebook()

# 샘플 데이터 생성
df = pd.DataFrame({
    '날짜': pd.date_range('2023-01-01', periods=10),
    '값': [10, 12, 15, 14, 17, 19, 21, 20, 22, 25]
})

source = ColumnDataSource(df)

# Bokeh로 선 그래프 생성
p = figure(x_axis_type="datetime", title="인터랙티브 선 그래프", width=800, height=400, tools="tap")

# 선 그래프 추가
p.line(x='날짜', y='값', source=source, line_width=2, mode='markers')

# 클릭된 데이터의 정보를 콘솔에 출력하는 JavaScript 콜백 추가
tap_callback = CustomJS(args=dict(source=source), code="""
    var indices = cb_obj.indices;
    if (indices.length > 0) {
        var data = source.data;
        var x = data['날짜'][indices[0]].toLocaleString();  // 날짜 형식을 문자열로 변환
        var y = data['값'][indices[0]];
        alert('날짜: ' + x + '\\n값: ' + y);
    }
""")

# TapTool에 콜백 추가
p.js_on_event('tap', tap_callback)

# 그래프 출력
show(p)
