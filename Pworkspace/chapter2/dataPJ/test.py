import plotly.graph_objs as go
import pandas as pd

# 샘플 데이터 생성
df = pd.DataFrame({
    '날짜': pd.date_range('2023-01-01', periods=10),
    '값': [10, 12, 15, 14, 17, 19, 21, 20, 22, 25]
})

# Plotly로 선 그래프 생성
fig = go.Figure()

# 선 그래프 추가
fig.add_trace(go.Scatter(x=df['날짜'], y=df['값'], mode='lines+markers', name='값'))

# 그래프에 인터랙티브 정보 추가
fig.update_traces(hoverinfo='text', text=[f"날짜: {d}<br>값: {v}" for d, v in zip(df['날짜'], df['값'])])

# 그래프 출력
fig.show()