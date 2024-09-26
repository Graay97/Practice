from bokeh.plotting import figure, show
from bokeh.models import HoverTool, ColumnDataSource
import pandas as pd

# 샘플 데이터 생성
df = pd.DataFrame({
    '날짜': pd.date_range('2023-01-01', periods=10),
    '값': [10, 12, 15, 14, 17, 19, 21, 20, 22, 25]
})

source = ColumnDataSource(df)

# Bokeh로 선 그래프 생성
p = figure(x_axis_type="datetime", title="인터랙티브 선 그래프", width=800, height=400)

# 선 그래프 추가
p.line(x='날짜', y='값', source=source, line_width=2)

# 마우스를 올렸을 때 정보 표시하는 HoverTool 추가
hover = HoverTool(tooltips=[("날짜", "@날짜{%F}"), ("값", "@값")],
                  formatters={'@날짜': 'datetime'})
p.add_tools(hover)

# 그래프 출력
show(p)