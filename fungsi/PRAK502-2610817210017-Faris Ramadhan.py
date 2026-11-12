def substraction (value1, value2):
    return value1 - value2

def absolute_value (number):
    if number < 0:
        return -number
    return number

a, c, b, d = map(int, input("Masukkan nilai x1, y1 dan x2, y2: ").split())

result = absolute_value(substraction(a, b)) + absolute_value(substraction(c, d))
print(result)

