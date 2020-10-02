distance = int(input())
o_c, o_f, o_d = [int(i) for i in input().split(' ')]
c_s, c_b, c_m, c_d = [int(j) for j in input().split(' ')]

def ceildiv(a, b):
    return -(-a // b)

def online_cost(d:int):
    if d <= o_f:
        return o_c
    elif d > o_f:
        return o_c + o_d*(d-o_f)

def classic_cost(d:int):
    return c_b + ceildiv(d, c_s)*c_m + d*c_d

if online_cost(distance) <= classic_cost(distance):
    print('Online Taxi')
elif online_cost(distance) > classic_cost(distance):
    print('Classic Taxi')
