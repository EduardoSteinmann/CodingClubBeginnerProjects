import random

print("Guessing Game!\n")

user_guess = int(input('Please enter in what you think the number is: '))

random_num = random.randint(1, 100)

if user_guess == random_num:
    print("You guessed correctly! Congratulations!")
else:
    print("You guessed wrong...")