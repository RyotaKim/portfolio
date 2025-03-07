inp = input("Enter string: ")
flip = []

for char in inp:
    if char.isalpha():
        if char.islower():
            flipped = chr(ord('z') - (ord(char) - ord('a')))
        else:
            flipped = chr(ord('Z') - (ord(char) - ord('A')))
        flip.append(flipped)
    else:
        flip.append(char)
    
print(''.join(flip))