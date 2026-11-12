def fibonacci (n):
    a, b = 0, 1
    hasil = []

    if n <= 0:
        return 1
    elif n == 1:
        return 1
    else:
        return fibonacci(n - 1) + fibonacci (n - 2)

suku = int(input("Masukkan jumlah suku: "))


deret_fibonacci = [fibonacci(i) for i in range(suku)]
print("Deret Fibonacci =", deret_fibonacci)