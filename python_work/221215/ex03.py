'''
input과 eval함수를 사용
함수 프로그래밍을 해보자
'''

import ex04

def inputEval():
    myinput = input("식을 입력하세요\n")
    print(eval(myinput)) #myinput은 str형

if __name__ == '__main__':
    print("실행했는 파일에서는...")
    print(__name__)
    inputEval()