"""
Even if no one askes this, this can also serve as a guideline as to what to talk about.
Possible questions and answers:
Q: What is "import random"?
A: Python has a lot of prebuilt code that was made by the creators.
    By typing "import random", import the code that is used to get random numbers,
    which allows us to use the functions in that code.

Q: How does random.randint() work?
A: random.randint() takes two numbers and input 
    and returns a random number within that range.
    The first number must be greater than the second.
"""

import random

print("Guessing Game!\n")

print('You will have six guesses.')

won = False

for i in range(6):
    user_guess = int(input('Please enter in what you think the number is: '))

    random_num = random.randint(1, 100)

    if user_guess == random_num:
        print("You guessed correctly!")
        won = True
        break
    else:
        print("You guessed wrong...")

if won:
    print("You won! Congratulations!")
else:
    print("You lost...")