string = []

while True:
    n = input("Enter next word: ")

    if n == 'quit':
        break
    else:
        string.append(n)

if len(string) == 1:
    print(string[0])
else:
    print(f"{', '.join(string[:-1])} and {string[-1]}")

