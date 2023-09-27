/* 
 * Even if no one askes this, this can also serve as a guideline as to what to talk about.
 * Possible questions and answers:
 * Q: Why do we write " * 1" after the prompt()?
 * A: This is to make sure that whatever the user entered is made into a number, if it can be.
 * We can't multiply a string, so by multiplying by one, we don't change the value of the input,
 * just the type.
 * 
 * Q: Why do we use "==" and not just "=" to compare variables?
 * A: This is found in almost all programming languages, and it's because the "=" is the 
 * *assignment operator*, which is just programming jargon for "it sets the value of a variable".
 * If we put "operator = '+'", JavaScript would think that we are setting the operation variable to '+'.
 * To avoid this, we use "==".
 * 
 * Q: What is the "%" thing?
 * A: That is the "modulus" operator. What it does is it take the number on the left
 * and divides it by the number on the right and then return the remainder. So 10 % 7 would equal 3,
 * because 10 divided by 7 is 1, with a remainder of 3.
 */


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