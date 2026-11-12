import math 

r = int(input(""))
t = int(input(""))

pi = 22/7
circumference = 2 * pi * r
area = pi * r * 2 * (t + r)
volume = (r ** 2) * pi * t


print(f"Volume= {volume:.2f}")
print(f"Luas= {area:.2f}")
print(f"Keliling= {circumference:.2f}")