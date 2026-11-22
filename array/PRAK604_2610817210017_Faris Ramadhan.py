import sys

try:
    message = input()
    reply = input()
except EOFError:
    print("Input tidak valid.")
    sys.exit(1)

if len(message) != len(reply):
    print("Panjang kalimat berbeda, pesan palsu")
    sys.exit(1)

code = ""

for i in range(len(message)):
    if message[i] == ' ' and reply[i] == ' ':
        code = code + ' '
    elif message[i] == reply[i]:
        code = code + '*'
    else:
        code = code + '#'

similar = '*'
amongus = '#'
count1 = 0
count2 = 0

for i in range(len(code)):
    if code[i] == similar:
        count1 += 1
    if code[i] == amongus:
        count2 += 1

print(code)
print("%c = %d" % (similar, count1))
print("%c = %d" % (amongus, count2))

if count1 >= count2:
    print("Pesan Asli")
else:
    print("Pesan Palsu")
