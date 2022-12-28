import pickle

# f = open("test.txt","wb") #쓰기바이너리로 저장 wb
# data = {1:"test",2:"study",3:"python"}
# pickle.dump(data,f)
# f.close()

f = open("test.txt","rb") #읽기 바이너리 rb
data = pickle.load(f)
print(data)
f.close()