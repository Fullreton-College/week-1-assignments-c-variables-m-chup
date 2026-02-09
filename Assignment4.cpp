#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int int1, int2, int3, int4, product, average;
    double int1_2, int2_2, int3_2, int4_2, product2, average2;
    cout << fixed << setprecision(3);

    cout << "Enter four integers." << endl;
    cin >> int1;
    cin >> int2;
    cin >> int3;
    cin >> int4;

    product = int1 * int2 * int3 * int4;
    average = ( int1 + int2 + int3 + int4) / 4;
    int1_2 = static_cast<double>(int1);
    int2_2 = static_cast<double>(int2);
    int3_2 = static_cast<double>(int3);
    int4_2 = static_cast<double>(int4);
    product2 = int1_2 * int2_2 * int3_2 * int4_2;
    average2 = ( int1_2 + int2_2 + int3_2 + int4_2) / 4;

    cout << product << " " << average << endl;
    cout << product2 << " " << average2 << endl;
}
