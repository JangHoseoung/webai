a = ['life','is','too','short']
result = " ".join(a)

print(result)


a = (1,2,3)
# a= list(a) + [4]
a = tuple(a)+tuple([4])
print(a)
'''
    list,tuple,set,range, iterable 반복자...iter
'''


#for i in []
a = dict()
a['name'] = 'python'
a[('a',)] = 'python'
try:
    a[[1]] = 'python'
except Exception as e:
    pass
a[250] = 'python'
print(a)
