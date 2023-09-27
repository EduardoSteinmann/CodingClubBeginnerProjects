""" 
Possible questions and answers:
Q: What does the float() around the input() do?
A: It does something called "casting", which just means taking a *type* and changing it to another type.
    the input() function returns a string. By "casting" it, we are changing that string into a *float*.
    Remember, a float is a number with a decimal point.

Q: Why do we pass a "string" to input()?
A: The input() function can take a prompt that the user has to answer. This is just so that we don't
    have to print() the question separately. It just looks nicer and the Python developers wanted it that way.

Q: How do we know when the user stops giving input to a question?
A: The input() function is designed such that it stops taking input when the user presses "enter".

Q: What happens if we enter something that isn't a number when we ask for a number?
A: The program will crash. Python cannot make something that isn't a number a number.
    We could technically check for this, but that's a more advanced topic for another day.

Q: Why do we use "==" and not just "=" to compare variables?
A: This is found in almost all programming languages, and it's because the "=" is the 
    *assignment operator*, which is just programming jargon for "it sets the value of a variable".
    If we put "operator = '+'", Python would think that we are setting the operation variable to '+'.
    To avoid this, we use "==".

Q: what is the "%" thing?
A: That is the "modulus" operator. What it does is it take the number on the left
    and divides it by the number on the right and then return the remainder.
    So 10 % 7 would equal 3, because 10 divided by 7 is 1, with a remainder of 3.
"""



num1 = float(input("Please enter in the first number: "))

operation = input("Please enter in the operation (+, -, *, /, %): ")

num2 = float(input("Please enter in the second number: "))

result = 0

if operation == "+":
    result = num1 + num2
elif operation == "-":
    result = num1 - num2
elif operation == "*":
    result = num1 * num2
elif operation == "/":
    result = num1 / num2
elif operation == "%":
    result = num1 % num2
else:
    result = "Invalid operation entered..."

print("The result is: " + str(result))