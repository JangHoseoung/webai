from datetime import date

day1=date(2019, 12, 14)
day2=date(2022, 12, 27)

print(day2 - day1)

import datetime

day1 = datetime.date(2019, 12, 14)
day2 = datetime.date(2022, 12, 27)

print(day2 - day1)

# import ex02
# ex02.doA()

from ex02 import doA
doA()

print(day1.isoweekday())
print(day2.isoweekday())
# monday = 1 tuesday = 2

import time
print(time.time())
print(time.ctime())

"a: b: c: d".split(":")

timelist = time.ctime().split(" ")
print(timelist)
