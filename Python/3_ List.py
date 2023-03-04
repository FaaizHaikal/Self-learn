#Introduction of List#

friends = ["Ivan", "Mikehunt", "Gabe Itch"]

print(friends)
print("index [0] =", friends[0])
print("index [1] =",friends[1])
print("index [-1] =",friends[-1])
print("index [-2] =",friends[-2])
print("index [1:] =", friends[1:]) #print all elements starting from index 1
print("index [0:2] =",friends[0:2]) #print 2 elements starting from index 0

friends[0] = "gay"
print("Index [0] diubah menjadi", friends[0])

#Function in List#

friends = ["Ivan", "Mike Hunt", "Gabe itch"]
numbers = [69, 420, 69420]
print("List friends = ", friends)
print("List numbers = ", numbers)
friends.extend(numbers)
print("Fungsi extend =", friends)

friends = ["Ivan", "Mike Hunt", "Gabe itch"]
friends.append("Black")
print("Fungsi append =", friends)

friends = ["Ivan", "Mike Hunt", "Gabe itch"]
friends.insert(2, "hentai")
print("Fungsi insert =", friends)

friends = ["Ivan", "Mike Hunt", "Gabe itch"]
friends.remove("Ivan")
print("Fungsi remove =", friends)

friends = ["Ivan", "Mike Hunt", "Gabe itch"]
friends.clear()
print("Fungsi clear =", friends)

friends = ["Ivan", "Mike Hunt", "Gabe itch"]
friends.pop()
print("Fungsi pop =", friends)

friends = ["Ivan", "Mike Hunt", "Gabe itch"]
print("Mike Hunt terletak di indeks =", friends.index("Mike Hunt"))

friends = ["Ivan", "Ivan", "Ivan", "Mike Hunt", "Gabe itch"]
print("List friends =", friends)
print("Fungsi count dapat menghitung jumlah \"Ivan\" dalam list, yaitu", friends.count("Ivan"))

friends = ["Ivan", "Mike Hunt", "Gabe itch"]
friends.sort()
print("Fungsi sort =", friends)

friends = ["Ivan", "Mike Hunt", "Gabe itch"]
friends.reverse()
print("Fungsi reverse =", friends)

friends = ["Ivan", "Mike Hunt", "Gabe itch"]
friends_2 = friends.copy()
print("Fungsi copy =", friends_2)