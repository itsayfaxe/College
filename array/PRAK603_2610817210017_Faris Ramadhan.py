import sys

buffer = []

def read_int():
    while len(buffer) == 0:
        try:
            row = input()
        except EOFError:
            return None
        buffer.extend(row.split())
    word = buffer.pop(0)
    try:
        return int(word)
    except ValueError:
        return None


column1 = read_int()
column2 = read_int()

if column1 is None or column2 is None or column1 <= 0 or column2 <= 0:
    print("Input tidak valid.")
    sys.exit(1)

if column1 != column2:
    print("Jumlah tidak sama.")
    sys.exit(1)

row1 = []
row2 = []

for i in range(column1):
    number = read_int()
    if number is None:
        print("Input tidak valid.")
        sys.exit(1)
    row1.append(number)

for j in range(column2):
    number = read_int()
    if number is None:
        print("Input tidak valid.")
        sys.exit(1)
    row2.append(number)

for i in range(column1):
    row1[i] *= row2[i]
    print("%d " % row1[i], end="")
print()
