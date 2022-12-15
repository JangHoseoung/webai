a = 10

def doA():
    global a #밖에 있는 a=10을 def doA()로 가지고 옴..
    a = a+1
    print(a)

doA()
print(a)