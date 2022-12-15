def doA():
    for i in range(5):
        yield i

for i in doA():
    print(i)
    print()
#잘 안씀...

def square_numbers(nums):
    for i in nums:
        yield i * i

my_nums = square_numbers([1,2,3,4,5])
print(next(my_nums))
print(next(my_nums))
print(next(my_nums))
print(next(my_nums))
print(next(my_nums))

#next1 1*1 next2 2*2