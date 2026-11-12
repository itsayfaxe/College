a = int(input("Masukkan bilangan: "))

if a >= 100 or a < 0 :
    print("Anda Menginput Melebihi Limit Bilangan")
elif a == 0 :
    print("Nol")
elif a < 10 :
    print("Satuan")
elif a == 10 :
    print("Puluhan")
elif a <= 19 :
    print("Belasan")
else :
    print("Puluhan")