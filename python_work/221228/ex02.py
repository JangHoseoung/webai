# print("정수 입력 :")
# a = input()
# a = int(a)
# a = bin(a)
# print(a[2:])




x = int(input())
y = ""
while x>0:
    y = str(x%2)+y
    x = x//2 #몫 구하는 연산자
    if x<1:
     print("2진수는")
     print(y)



    