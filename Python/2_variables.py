#Integer
integer = 5
print(integer)
integer+=1
print(integer)

#For string, you can use double quote "" or single quote ''
name = "Faaiz"
name2 = 'faaiz'
fullname = name + " " + name2
print(name + " " + name2)
print(fullname)

#Float are basically variable that can store decimal numbers
decimal = 173.5
print(decimal)
decimal -= 0.5
print(decimal)

#Boolean are variables that can store TRUE or FALSE
# TRUE = 1
# FALSE is other than 1 (usually 0)
I_am_human = True
print(int(I_am_human))
I_am_not_human = False
print(int(I_am_not_human))

#typecasting is converting a variable into another variable
#str(variable) is to convert variable into strings
#int(variable) is to convert variable into integers
#float(variable) is to convert variable into float
#bool(variable) is to convert variable into bool

#type(variable) is to check what data type is the variable
print(type(fullname))
print(type(integer))
print(type(decimal))
print(type(I_am_human))