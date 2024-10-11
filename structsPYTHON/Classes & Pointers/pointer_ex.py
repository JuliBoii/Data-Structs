num1 = 11

num2 = num1

print("Before num2 is updated:")
print("num1 =", num1)
print("num2 =", num2)

# When we execute the code, we can
# see that num1 and num2 have the same
# memory address
print("\nnum1 points to:", id(num1))
print("num2 points to:", id(num2))

num2 = 22

print("\nAfter num2 is updated:")
print("num1 =", num1)
print("num2 =", num2)

# When we execute the code, we can
# see that num1 and num2 have different
# memory addresses
# Integers are immutable and cant be changed
# Meaning, we cannot actually change the
# value 11, once we have already created
# it
print("\nnum1 points to:", id(num1))
print("num2 points to:", id(num2))

print("\n-------------------------\n")

# New example with dictionaries
# The first portion of the previous
# example holds true for dictionaries
# so dict1's memory address is the same
# as dict2.
dict1 = {
    'value': 11
}

dict2 = dict1

print("Before dict2 is updated:")
print("dict1 =", dict1)
print("dict2 =", dict2)

print("\ndict1 points to:", id(dict1))
print("dict2 points to:", id(dict2))

dict2['value'] = 22

print("\nAfter dict2 is updated:")
print("dict1 =", dict1)
print("dict2 =", dict2)

# After executing program, we can see that
# dict1 and dict2 still have the same
# memory address, despite only changing
# the 'value' for dict2
# Dictionaries can be changed
# Additionally, dict1['value'] also has the
# same information as dict2['value']
print("\ndict1 points to:", id(dict1))
print("dict2 points to:", id(dict2))

# Meaning we can change where these variables
# point to in memory

# Example
dict3 = {
    'value': 33
}
dict2 = dict3

print("\ndict3 points to:", id(dict3))
print("dict2 points to:", id(dict2))

# So if we set all dicts to dict3
# the dictionary that was pointed to by
# dict1 is removed by python, with
# garbage collection
