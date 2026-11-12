def reverse (n):
    reversed = 0
    while n != 0:
        reversed = reversed * 10 + n % 10
        n = n // 10
    return reversed

a, b = map(int, input().split())
a = reverse(a)
b = reverse(b)
c = a + b
print(reverse(c))