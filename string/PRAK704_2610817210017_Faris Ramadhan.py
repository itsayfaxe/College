try:
    desc = input()
except EOFError:
    print("Input tidak valid")
    exit()         

if len(desc) > 20:

    print("%.20s..." % desc, end="")
else:
    print("%s" % desc, end="")