/* 
 * Even if no one askes this, this can also serve as a guideline as to what to talk about.
 * Possible questions and answers:
 * Q: How does Math.random() work?
 * A: Math.random() returns a random number between 0 and 1.
 * This isn't very useful for our purposes, since we want a 
 * random number between 1 and 100. To do this, we simply multiply
 * the number that Math.random() gives us by 100. 
 * 
 * Q: What is "===" supposed to do? How is it different from "=="?
 * A: The triple equals not only compares the values of the variables,
 * but also checks if they are the same type.
 */

console.log("Guessing Game!\n\n");

console.log("You will have six tries to guess the number.");

var won = false;

for (var i = 0; i < 6; i++)
{
    var randomNum = Math.random() * 100;

    var userGuess = prompt("Please enter in your guess: ") * 1;

    if (userGuess === randomNum)
    {
        console.log("You guessed correctly!\n");
        won = true;
        break;
    }
    else
    {
        console.log("You guessed wrong...");
    }
}

if (won)
{
    console.log("You won! Congratulations!");
}
else
{
    console.log("You lost...");
}