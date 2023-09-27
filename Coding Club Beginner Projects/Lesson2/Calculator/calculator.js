var num1 = prompt("Please enter in the first number: ") * 1;

var operation = prompt("Please enter in the operation (+, -, *, /, %): ");

var num2 = prompt("Please enter in the second number: ") * 1;

var result = 0;

if (operation == '+')
{
    result = num1 + num2;
}
else if (operation == '-')
{
    result = num1 - num2;
}
else if (operation == '*')
{
    result = num1 * num2;
}
else if (operation == '/')
{
    result = num1 / num2;
}
else if (operation == '%')
{
    result = num1 % num2;
}
else
{
    result = "Invalid operation entered...";
}

console.log("The result is: " + result);