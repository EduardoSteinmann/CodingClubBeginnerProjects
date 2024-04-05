#include <iostream>

/* 
 * Even if no one askes this, this can also serve as a guideline as to what to talk about.
 * Q: How does std::cin work?
 * A: Think of the ">>" as a little arrow that's saying "put whatever the user entered into this variable".
 */

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

	/*This variable stores the volume,
	and are defined with the formulas to calculate volume with the inputs from the user.*/
	double volume = length * width * height;

	//This statement display the volume of the rectangle.
	std::cout << "The volume of the rectangle is: " << volume << " inches cubed." << '\n';

	return 0;
}