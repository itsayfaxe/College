def number_of_digits(x):

    if x == 0:
        return 0
    return (x % 10) + number_of_digits(x // 10)

x = int(input())
print(number_of_digits(x))