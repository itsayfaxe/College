import sys

try:
    sentence = input("Kalimat: ")
except EOFError:
    print("Input tidak valid")
    sys.exit(1)

vocal = "aiueoAIUEO"
count1 = 0
count2 = 0

for i in range(len(sentence)):
    letter = 0
    for j in range(len(vocal)):
        if sentence[i] == ' ':
            continue
        if sentence[i] == vocal[j]:
            count1 += 1
            letter = 1
            break
    if letter == 0 and ((sentence[i] >= 'a' and sentence[i] <= 'z') or (sentence[i] >= 'A' and sentence[i] <= 'Z')):
        count2 += 1

print("Jumlah Vokal : %d" % count1)
print("Jumlah Konsonan: %d" % count2)
