a = int (input(""))
b = int (input(""))

c = int (((b**2) - (a**2))**0.5)
circumference = int(a + b + c)
area = int(1/2 * c * a)

print(f"Alas= {c} cm")
print(f"Tinggi= {a} cm")
print(f"Keliling= {circumference} cm")
print(f"Luas= {area} cm^2")
