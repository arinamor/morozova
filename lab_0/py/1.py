f = open('1.txt')
l = {int(e.strip()) for e in f}
k = {i for i in range(1,max(l)+1)}
print(k.difference(l))