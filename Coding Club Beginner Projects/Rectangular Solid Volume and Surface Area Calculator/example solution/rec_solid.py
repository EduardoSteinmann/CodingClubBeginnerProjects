""" 
TODO! add possible questions and answers to this example
"""

print("Rectangular Solid Geometry Calculator...")

length = int(input("Please enter the rectangular solid's length (in inches): "))

width = int(input('Width (in inches): '))

height = int(input('Height (in inches): '))

volume = length * width * height
surface_area = 2 * (length * height) + 2 * (width * height) + 2 * (width * length)

print("The surface area of the rectangle is: " + surface_area + "inches squared.")
print("The volume of the rectangle is: " + volume + "inches cubed.")