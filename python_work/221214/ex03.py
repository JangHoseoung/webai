'''
    계속 반복
    입력받은 숫자에 대한
    while 구문으로 구구단을 출력하자
'''
info = '''
    구구단 몇단 출력?
    종료하실려면 음수를 입력하세요.
'''
while True:
    print(info)
    gugudan = input()
    gugudan = int(gugudan)
    if int(gugudan) < 0:
        print("종료됩니다.")
        break
    elif gugudan ==0:
        print("0단은 없습니다")
    else:
        a = 1
        while(a<10):
            print(f"{gugudan}*{a}={gugudan*a}") #print("%d * %d = %d"%(gugudan,a,gugudan*a))와 같다
            a+=1
