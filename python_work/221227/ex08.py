import itertools
it = itertools.combinations(range(1,46),6)
for num in it:
    print(num)

print(len(list(itertools.combinations(range(1,46),6))))