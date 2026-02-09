#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double mph2 , minutes2, seconds;
    int mph , minutes;
    cout << fixed << setprecision(1);

    cout << "Enter a quantity of miles (per hour)." << endl;
    cin >> mph2;
    mph = static_cast<int>(mph2 * 10);
    minutes2 = 60 / mph2;
    minutes = static_cast<int>(minutes2);
    seconds = 600 % mph;
    seconds = seconds / mph;
    seconds = seconds * 60;

    cout << "The pace is about " << minutes << " minutes and " << seconds << " seconds per mile." << endl;
}
