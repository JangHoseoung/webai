from mywork import MyWorkBook

mwb = MyWorkBook()

cnt = input("몇행으로 출력?") 
cnt = int(cnt)+1 #입력 수 만큼 별출력
print(cnt) #ex1의 cnt
print(mwb.cnt) #myworkbook의 cnt


mwb.setCnt(cnt)
mwb.doSave()
mwb.doLoad()






