t = int(input())
num = input().split()
new = ""
for  n in num:
    new += n[-1]

new = int(new)
if not(new%10):
    print("Yes")
else:
    print("No")
