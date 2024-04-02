total = 0

while True:
    num = int(input("Please enter in a non-negative number to add to the total, or a negative number to stop: "))
    if num < 0:
        break
    total += num

print("The total is: " + total)