#Basic of Tuple

print("Tuple is similiar to list, but the key difference is that tuple is \"immutable\".")
print("It means tuple can't be modify in any way")
print("Lists uses [], while tuples uses ()")
print("for example we have a tuple called \'coordinate = (6, 9)\'")
coordinate = (6, 9)
print("Index 0 =", coordinate[0])
print("Index 1 =", coordinate[1])

print("Now, let's try to modify the tuple by changing the index 1 element into another element.")
print("Pyhton will send error message like down here.")
coordinate[1] = 69