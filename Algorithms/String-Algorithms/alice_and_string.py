str1, str2 = input(),input()

if (len(str1)==len(str2)):
    for i in range(len(str1)):
        if (str1[i]>str2[i]):
            print('NO')
            break
        else:
            print('YES')

else:
    print('NO')
