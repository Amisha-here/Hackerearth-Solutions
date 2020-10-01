import math
t=int(raw_input().strip())
while t:
    l=[]
    try:
        {l.append(x) for x in raw_input().strip().split(' ')}
    except:
        pass
    h,x,z=int(l[0]), int(l[1]), int(l[2])
    trahul=float(x/z)
    traj=float(math.sqrt(h/16))
    if float(traj)<float(trahul):
        print 'Raj'
    else:
        print "Rahul"
        
    t-=1
