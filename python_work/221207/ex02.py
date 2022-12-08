a = "hobby"

cnt = a.count("b")
print(cnt)

b = "python is best choice"

n1 = b.find('b')
print(n1)
n1 = b.find('k') #단어없어도 에러안남 -1
print(n1)
n1 = b.index('b')
print(n1)
n1 = b.index('k') #에러남 해당되는 단어가 없음
print(n1)