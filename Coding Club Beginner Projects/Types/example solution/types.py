# every variable has a "type". 
# Types are important because they classify what we can and can't do with a variable.
# It wouldn't make sense if we tried to add a string to a number.
# In python, types are inferred, meaning you don't have to write out what type a variable is!
# Python can just tell!
# To see what type a variable is, we can pass it to the type() function

number = 2
print(type(number))

number_with_decimal_point = 3.14
print(type(number_with_decimal_point))

true_or_false = True 
print(type(true_or_false))

hi_string = "Hi, I'm a string!"
print(type(hi_string))

empty_list = []
print(type(empty_list))

tuple_of_alex = ("alex", 17, "Co-VP")
print(type(tuple_of_alex))

empty_set = {None}
print(type(empty_set))

empty_dict = {}
print(type(empty_dict))