t = int(input())
while(t):
    t -= 1
    s = int(input())
    win = s%6
    wins = ""
    if(win == 1 or win == 0):
        wins = "WS"
    elif(win == 2 or win == 5):
        wins = "MS"
    else:
        wins = "AS"
    fron = s%12
    if(fron == 0):
        fron = 12
    frons = s + 13 - (2*fron)
    print(frons,wins)
