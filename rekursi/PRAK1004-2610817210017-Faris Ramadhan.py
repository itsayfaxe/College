def disc_shift(g):
    if g == 1:
        return 1
    return  2 * disc_shift(g - 1) + 1

g = int(input())
print(f"Jumlah langkah minimum untuk {g} cakram adalah", disc_shift(g))