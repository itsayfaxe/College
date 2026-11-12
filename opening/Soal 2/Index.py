Nama = input ("Masukkan nama mahasiswa: ")
Nilai = int (input("Masukkan nilainya: "))

if (Nilai >= 90):
    print (f"Grade {Nama} Adalah A")
elif (Nilai >= 80):
    print (f"Grade {Nama} Adalah B")
elif (Nilai >= 70):
    print (f"Grade {Nama} Adalah C")
elif (Nilai >= 60):
    print (f"Grade {Nama} Adalah D-")
elif (Nilai < 60):
    print (f"Grade {Nama} Adalah E")