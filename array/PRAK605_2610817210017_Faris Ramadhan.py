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


ordo = read_int()

if ordo is None:
    print("Input tidak valid")
    sys.exit(1)

matrixA = []
matrixB = []

print("Matrix A")
for i in range(ordo):
    row = []
    for j in range(ordo):
        number = read_int()
        if number is None:
            print("Input tidak valid")
            sys.exit(1)
        row.append(number)
    matrixA.append(row)

print("Matrix B")
for i in range(ordo):
    row = []
    for j in range(ordo):
        number = read_int()
        if number is None:
            print("Input tidak valid")
            sys.exit(1)
        row.append(number)
    matrixB.append(row)

matrixC = []
for i in range(ordo):
    row = []
    for j in range(ordo):
        result = 0
        for k in range(ordo):
            result += matrixA[i][k] * matrixB[k][j]
        row.append(result)
    matrixC.append(row)

print("Matrix AXB")
for i in range(ordo):
    for j in range(ordo):
        print("%4d" % matrixC[i][j], end="")
    print()
