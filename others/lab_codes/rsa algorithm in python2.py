import math

# Step 1: Choose two prime numbers
p = 61
q = 53

# Step 2: Compute n, the product of p and q
n = p * q

# Step 3: Compute the totient of n
totient = (p - 1) * (q - 1)

# Step 4: Choose a public exponent e
e = 17

# Step 5: Compute the private exponent d
d = pow(e, -1, totient)

# Display the public and private keys
print("Public Key: ", (e, n))
print("Private Key: ", (d, n))

# Encrypt a message
msg = input("Enter the message to encrypt: ")
encrypted_msg = []
for char in msg:
    # Convert the character to an integer
    m = ord(char)

    # Apply the encryption function C = m^e mod n
    c = pow(m, e, n)

    # Add the encrypted character to the list
    #of encrypted characters
    encrypted_msg.append(c)

print("Encrypted Message: ", encrypted_msg)

# Decrypt the message
decrypted_msg = ""
for char in encrypted_msg:
    # Apply the decryption function m = C^d mod n
    m = pow(char, d, n)

    # Convert the integer back to a character
    #and add it to the decrypted message
    decrypted_msg += chr(m)

print("Decrypted Message: ", decrypted_msg)