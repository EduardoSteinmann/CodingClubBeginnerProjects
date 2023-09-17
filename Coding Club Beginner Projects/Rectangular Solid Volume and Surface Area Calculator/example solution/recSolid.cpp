#include <iostream>

int main()
{
	//variables for length, width, and height are declared here.
	double length;
	double width;
	double height;

	//Displays what the app is.
	std::cout << "Rectangular Solid Geometry App..." << '\n' << '\n';

	//Prompts the user to enter the length of the rectangle.
	std::cout << "Please enter the rectangular solid's length (in inches): ";

	//Obtains the length of the rectangle, which is an input.
	std::cin >> length;

	//Prompts the user to enter the width of the rectangle.
	std::cout << "Width (in inches): ";

	//Obtains the width of the rectangle, which is an input.
	std::cin >> width;

	//Prompts the user to enter the height of the rectangle.
	std::cout << "Height (in inches): ";

	//Obtains the height of the rectangle, which is an input.
	std::cin >> height;

	//Skips a line.
	std::cout << '\n';

	/*These two variables are volume and surface area, respectively,
	and are defined with the formulas to calculate volume and surface area with the inputs from the user.*/
	double volume = length * width * height;
	double surfaceArea = 2 * (length * height) + 2 * (width * height) + 2 * (width * length);

	//These two statements display the surface area and volume of the rectangle.
	std::cout << "The surface area of the rectangle is: " << surfaceArea << " inches squared." << '\n';
	std::cout << "The volume of the rectangle is: " << volume << " inches cubed." << '\n';

	return 0;
}