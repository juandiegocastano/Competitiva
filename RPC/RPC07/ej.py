fhandle = open("test.txt")

texto = set()
for line in fhandle:
    for word in line.split():
        texto.add(word)
print(texto)
        





