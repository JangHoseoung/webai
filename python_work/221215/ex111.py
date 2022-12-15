def print_kwargs(**kwargs):
    test = {}
    for item in sorted(kwargs):
        test[item] = kwargs[item]
    print(test)

    
print_kwargs(bb=300,name='foo', age=3,fff=400)

