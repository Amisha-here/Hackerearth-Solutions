a, b, c = map(int,input().split())
a, b = b, a
a *= c
b += c
print(a, b)
