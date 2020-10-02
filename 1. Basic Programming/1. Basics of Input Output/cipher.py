message_to_encrypt = input()
encryption_number = int(input())
encrypted_message = ''

def check(char_number):
    if 48 <= char_number <= 57 or 65 <= char_number <= 90 or 97 <= char_number <= 122:
        return True
    return False

def numbers(temp):
    if temp> 57:
        while temp > 57:
            temp -= 10
        return chr(temp)
    return chr(temp)

def lower_letters(temp):
    if temp > 122:
        while temp > 122:
            temp -= 26
        return chr(temp)
    return chr(temp)

def upper_letters(temp):
    if temp > 90:
        while temp > 90:
            temp -= 26
        return chr(temp)
    return chr(temp)

def overlap(char_number):
    temp = char_number + encryption_number
    if chr(char_number).isnumeric():
        return numbers(temp)
    else:
        if chr(char_number).isupper():
            return upper_letters(temp)
        return lower_letters(temp)
    return chr(temp)

for i in message_to_encrypt:
    # if symbol is not detected, encrypt character
    if check(ord(i)):
        encrypted_message += overlap(ord(i))
    else:
        encrypted_message += i

print(encrypted_message)