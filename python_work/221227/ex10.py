from operator import itemgetter

student = [('홍길동',11,"사과"),
            ('이길동',33,"사과"),
            ('박길동',22,"사과")]

student = sorted(student,key=itemgetter(1))  #ex (0)이면 ㄱㄴㄷㄹ 순서대로 출력
print(student)