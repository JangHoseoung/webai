import time

#계속 반복 실행해야되는데 1초마다 실행하라고 하면 cpu 성능 저하를 피할수 있다.
for i in range(10): #10번
    time.sleep(1)   #1초 마다 +1초 +1초
    print("test")   #test 


import cv2
num = cv2.imread("small_transformer.png")
print(num)