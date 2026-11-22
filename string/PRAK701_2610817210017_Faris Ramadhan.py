import sys

try:
    front = input("Nama Depan : ")
    back = input("Nama Belakang : ")
except EOFError:
    print("Input tidak valid")
    sys.exit(1)

length = len(front) + len(back)

front = front + " " + back

print("Nama Lengkap : %s" % front)
print("Panjang Nama (tanpa spasi) : %d" % length)
