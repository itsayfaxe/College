def maximum(a, b):
    if (a > b):
        return a
    else:
        return b
    
def minimum(a, b):
    if (a < b):
        return a
    else:
        return b

limit = 0
max = -100000
min = 100000

number = int(input("Masukkan banyak jumlah input: "))
i = 1

while limit < number:
    value = int(input(f"Masukkan angka ke-{i}: "))
    max = maximum(max, value)
    min = minimum(min, value)
    limit += 1
    i += 1
    
print(f"Angka terbesar adalah \"{max}\" dan angka terkecil adalah \"{min}\"")