import math
tinggi = 12
alas = 5
miring = math.sqrt(alas**2 + tinggi**2)

print(f"Diketahui :")
print(f"Alas = {alas}cm")
print(f"Tinggi = {tinggi}cm")
print(f"")
keliling = tinggi + alas + miring
luas = 0.5 * alas * tinggi
print(f"Jawab :")
print(f"Sisi A = {tinggi}cm")
print(f"Sisi B = {miring: .0f}cm")
print(f"Sisi C = {alas}cm")
print(f"Keliling = {keliling: .0f}cm")
print(f"Luas = {luas: .0f}cm")