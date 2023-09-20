""" 
Every variable has a "type". 
Types are important because they classify what we can and can't do with a variable.
It wouldn't make sense if we tried to add a string to a number.
In python, types are inferred, meaning you don't have to write out what type a variable is!
Python can just tell!
To see what type a variable is, we can pass it to the type() function
"""

""" 
Possible questions and answers:
Q: Why would we want to say:
    num = 50
and not:
    num = "50"?
A: Because we can do mathematical operations on numbers, and not strings.
    Try typing "50" * 4 in the print function.
    Instead of getting 200, we get "50505050"
"""

# Number types (ints and floats)
num = 3
print(type(num))

num_with_decimal = 3.14
print(type(num_with_decimal))

# Boolean type (stores True or False)
is_cool = True
print(type(is_cool))

# String types ("sentences", "Strings" of characters)
hi_str = "Hi, I'm a string!"
print(type(hi_str))



""" we'll cover these types later """
# empty_list = []
# print(type(empty_list))

# tuple_of_alex = ("alex", 17, "Co-VP")
# print(type(tuple_of_alex))

# empty_set = {None}
# print(type(empty_set))

# empty_dict = {}
# print(type(empty_dict))