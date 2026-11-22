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


room = read_int()

if room is None or room <= 0:
    print("Input tidak valid.")
    sys.exit(1)

zetsu = []

for i in range(room):
    number = read_int()
    if number is None or number <= 0:
        print("Input tidak valid.")
        sys.exit(1)
    zetsu.append(number)
    zetsu[i] = zetsu[i] * (i + 1)

for i in range(room):
    print("%d " % zetsu[i], end="")
print()
