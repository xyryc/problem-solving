import random

a = "abcdefghijklmnopqrstuvwxyz"
print(a)
key = list(a)
random.shuffle(key)
key = ''.join(key)
print(key)
upper_key = key.upper()

plaintext = "AabBYyZz"
ciphertext = ""

for char in plaintext:
    if char.lower() in a:
        idx = a.index(char.lower())
        if char.isupper():
            ciphertext += upper_key[idx].upper()
        else:
            ciphertext += key[idx]
    else:
        ciphertext += char

print(plaintext)
print(ciphertext)
