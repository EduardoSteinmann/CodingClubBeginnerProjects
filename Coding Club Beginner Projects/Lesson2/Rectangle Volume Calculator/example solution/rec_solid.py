"""
Possible questions and answers:
Q: How does input() work?
A: The function input() takes in the user's input until they press enter,
    returning a string. We can optionally pass a *string* to the input() function that
    will get printed and act like a prompt.

Q: What does the int() around the input() do?
A: It does something called "casting", which just means taking a *type* and changing it to another type.
    the input() function returns a string. By "casting" it, we are changing that string into a *int*.
    Remember, an int is a just a number WITHOUT a decimal point.

Q: What happens if we enter something that isn't a number when we ask for a number?
A: The program will crash. Python cannot make something that isn't a number a number.
    We could technically check for this, but that's a more advanced topic for another day.
"""

print("Rectangular Solid Geometry Calculator...")

length = int(input("Please enter the rectangular solid's length (in inches): "))

width = int(input('Width (in inches): '))

height = int(input('Height (in inches): '))

volume = length * width * height
surface_area = 2 * (length * height) + 2 * (width * height) + 2 * (width * length)

print("The surface area of the rectangle is: " + surface_area + "inches squared.")
print("The volume of the rectangle is: " + volume + "inches cubed.")