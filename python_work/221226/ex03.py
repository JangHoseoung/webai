txt = input("파일의 내용 입력")

f = open("txt.txt","a",encoding="UTF-8") #w는 덮어쓰기 a 추가
f.write(txt)
f.close()