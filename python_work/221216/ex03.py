'''
3500
크림빵 500 새우깡 700 콜라 400
최대 갯수 맞춰서 구매하는 경우의 수


500+700+400 = 3500
'''

file1 = open("result.txt","a",encoding="UTF-8")
a = 3500- 500 -700 -400
print(a)

#1900 - (500*x+700*y+400*z) == 0
for x in range(5):
    for y in range(4):
        for z in range(5):
            if(1900 - (500*x+700*y+400*z)) == 0:
                print(f"크림빵 = {x} 새우깡 = {y} 콜라 ={z}")
                file1.write(f"크림빵 = {x} 새우깡 = {y} 콜라 ={z}\n")
               


print("무엇을 고를래?")
file1.write("무엇을 고를래?")



file1.close()
