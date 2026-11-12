def Biodata(tahunLahir, Namaku, Asal):
    tahun_sekarang = 2020;
    tahunLahir = tahun_sekarang - tahunLahir
    return (print(f"Perkenalkan Nama Saya: {Namaku}\n"
            f"Umur Saya: {tahunLahir}\n"
            f"Adalah Angkatan {tahun_sekarang}\n"
            f"Asal Saya dari: {Asal}"))
    

tahunLahir = int(input("Masukkan tahun lahir: "))
a = input("Masukkan Nama: ")
b = input("Masukkan tempat asal: ")
print()
Biodata(tahunLahir, a, b)