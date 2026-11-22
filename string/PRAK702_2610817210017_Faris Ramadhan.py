import sys

try:
    word = input()
except EOFError:
    print("Input tidak valid")
    sys.exit(1)

word = word.lower()

left = 0
right = len(word) - 1
palindrom = True

while left < right:
    if word[left] != word[right]:
        palindrom = False
        break
    left += 1
    right -= 1

if palindrom:
    print("Kata '%s' adalah palindrom" % word)
else:
    print("Kata '%s' bukan palindrom" % word)
