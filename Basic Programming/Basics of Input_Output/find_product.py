array_size = int(input())
numbers = input()
array_elements = [int(x) for x in numbers.split(' ')]

answer = 1
for i in range(array_size):
    answer += (answer * i) % (10 ** 9 + 7)

print(answer)