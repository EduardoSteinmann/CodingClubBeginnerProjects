//Rudimentary implementation: 
//Doesn't take into account spaces, special characters or anything like that, but for now we'll use it to sbow tbe students how to make an isPalindrome function
function reverseString(stringToReverse)
{
    var reversed = "";
    for (var i = stringToReverse.length - 1; i >= 0; i--)
    {
        reversed += stringToReverse[i];
    }
    return reversed;
}

function isPalindrome(str)
{
    var reversedStr = reverseString(str);
    return str == reversedStr;
}

console.log("Check if a function is a Palindrome!\n");
var stringToCheck = prompt("Please enter in the string: ");
console.log(isPalindrome(stringToCheck));