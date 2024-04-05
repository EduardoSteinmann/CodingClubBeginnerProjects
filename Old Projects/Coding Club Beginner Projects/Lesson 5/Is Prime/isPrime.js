function isPrime(num)
{
    for (var i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

console.log("Check if a number is prime!\n");
var number = prompt("Please enter in the number: ");
console.log(isPrime(number));