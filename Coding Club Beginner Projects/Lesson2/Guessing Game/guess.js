console.log("Guessing Game!\n\n");

var randomNum = Math.random() * 100;

var userGuess = prompt("Please enter in your guess: ") * 1;

if (userGuess === randomNum)
{
    console.log("You guessed correctly! Congratulations!")
}
else
{
    console.log("You guessed wrong...");
}