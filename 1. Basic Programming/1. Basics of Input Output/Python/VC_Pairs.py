T = int(input())
vow = "aeiou"
for i in range(T):
    N = int(input())
    S = input()
    count=0
    for i in range(N-1):
        if S[i] not in vow:
            if S[i + 1] in vow:
                count += 1
        else:
            continue
    print(count)