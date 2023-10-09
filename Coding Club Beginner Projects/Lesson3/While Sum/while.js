var total = 0;

while (true)
{
    var num = prompt("Please enter in a non-negative number to add to the total, or a negative number to stop: ");
    if (num < 0)
    {
        break;
    }
    total += num;
}

console.log("The total is: " + total);