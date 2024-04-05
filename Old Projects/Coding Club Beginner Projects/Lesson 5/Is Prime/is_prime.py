def is_prime(num):
    i = 2
    while i < num:
        if num % i == 0:
            return False
        i += 1
    return True

print("Check if a number is prime!")
number = int(input("Please enter in the number: "))
print(is_prime(number))