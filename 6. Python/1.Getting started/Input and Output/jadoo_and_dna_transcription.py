s = input()
for i in s:
    if i!="G" and i!="C" and i!="T" and i!="A":
        print("Invalid Input")
        exit()
for i in s:
    if i=="G":
        print("C",end="")   #see note below
    elif i=="C":
        print("G",end="")
    elif i=="T":
        print("A",end="")
    else:
        print("U",end="")
