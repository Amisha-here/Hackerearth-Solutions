n=int(raw_input())
for i in range(n):
    s=str(raw_input())
    ans=''
    for j in range (len(s),0,-1):
        ans+=s[j-1]
    print ans
        
