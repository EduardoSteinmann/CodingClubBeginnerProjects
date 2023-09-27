/* 
 * Q: How does prompt() work?
 * A: The function prompt() takes in the user's input until they press enter,
 * returning a string. We can optionally pass a *string* to the prompt() function that
 * will get printed and act like a prompt.
 * 
 * Q: Why do we write " * 1" after the prompt()?
 * A: This is to make sure that whatever the user entered is made into a number, if it can be.
 * We can't multiply a string, so by multiplying by one, we don't change the value of the input,
 * just the type.
 */

console.log("Rectangular Solid Geometry Calculator...\n\n");

var length = prompt("Please enter the rectangular solid's length (in inches): ") * 1;
var width = prompt("Width (in inches): ") * 1;
var height = prompt("Height (in inches): ") * 1;

var volume = length * width * height;

console.log("The volume of the rectangle is: " + volume + " inches cubed.");