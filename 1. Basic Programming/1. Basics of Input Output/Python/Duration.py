t = int(input())
while(t):
    t -= 1
    sh, sm, eh, em = map(int,input().split())
    st = sh*60 + sm
    et = eh*60 + em
    wt = et - st
    print(wt//60,wt%60)
