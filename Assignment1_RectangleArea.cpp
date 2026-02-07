#include <iostream>

using namespace std;

int main()
{
	// print name of program
	cout << "Rectangle Calculator" << endl << endl;

	// get height and width from user
	double height;
	double width;
	cout << "Enter height and width: ";
/* write your code here */
	// calculate area
	
	cin >> height;
	cin >> width;
    double area;
    area = height * width;

	// write output to console
	
    cout << endl << "The area of the rectangle is "<<area<<" units squared."<<endl;

	// return value that indicates normal program exit
    return 0;
}
