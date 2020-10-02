t = int(input())

for _ in range(t):
    cost_green, cost_purple = map(int, input().split())
    p = int(input())
    a = []
    b = []
    for i in range(p):
        m, n = map(int, input().split())
        a.append(m)
        b.append(n)
    
    print(max(sum(a),sum(b))*min(cost_green, cost_purple) + min(sum(a),sum(b))*max(cost_green,cost_purple))