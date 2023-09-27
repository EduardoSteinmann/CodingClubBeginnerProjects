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