import sys

buffer = []

def read_int():
    while len(buffer) == 0:
        try:
            row2 = input()
        except EOFError:
            return None
        buffer.extend(row2.split())
    word = buffer.pop(0)
    try:
        return int(word)
    except ValueError:
        return None


row1 = read_int()
column = read_int()

if row1 is None or column is None or row1 <= 0 or column <= 0:
    print("Input tidak valid.")
    sys.exit(1)

matrix = []

for i in range(row1):
    row2 = []
    for j in range(column):
        number = read_int()
        if number is None:
            print("Input tidak valid.")
            sys.exit(1)
        row2.append(number)
    matrix.append(row2)

for i in range(row1):
    for j in range(column):
        print("%4d" % matrix[i][j], end="")
    print()
print()
