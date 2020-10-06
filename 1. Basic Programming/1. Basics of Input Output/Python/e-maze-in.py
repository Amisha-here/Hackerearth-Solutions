s = input()
x = 0
y = 0
for c in s:
    if(c == "L"):
        x -= 1
    elif(c == "R"):
        x += 1
    elif(c == "U"):
        y += 1
    else:
        y -= 1
    
print(x,y)
