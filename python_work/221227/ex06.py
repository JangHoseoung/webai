import matplotlib.pyplot as plt
import random


for i in range(5):
    a = random.randint(0,10)
    b = random.randint(0,100)

    plt.plot((0,a),(1,b))
    plt.savefig(f'a{i}.png') #저장

    # python
    # flask 웹
    # matplotlib 그래프
    # oprnpyxl 엑셀
    # selenium 브라우저 자동
    # numpy,pandas 데이터 분석
    # sklearn 머신러닝
    # tensorflow 딥러닝