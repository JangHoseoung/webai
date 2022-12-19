#자연수 13이 홀수인지 짝수인지 판별할수 있는 방법에 대해 말해보자

print("입력하시오 : ",end="")
num1 = input()
if int(num1) % 2 == 0:
    print("짝수")
else :
    print("홀수")

    if num1 == 13:
        print(num1)
