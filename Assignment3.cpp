#include <iostream>
using namespace std;

int main( )
{
    string instructorname;
    string studentname;
    string food;
    string temperature;
    string adjective;
    string color;
    string petanimal;
    
    cout << "Enter your instructor's name." << endl;
    cin >> instructorname;
    cout << "Enter your name." << endl;
    cin >> studentname;
    cout << "Enter a food." << endl;
    cin >> food;
    cout << "Enter a number from 100 to 120." << endl;
    cin >> temperature;
    cout << "Enter an adjective." << endl;
    cin >> adjective;
    cout << "Enter a color." << endl;
    cin >> color;
    cout << "Enter an animal." << endl;
    cin >> petanimal;

    cout << endl;
    cout << "Dear Instructor " << instructorname << "," << endl << endl;
    cout << "I am sorry that I am unable to turn in my homework" << endl;
    cout << "at this time. First, I ate a rotten " << food << ", which" << endl;
    cout << "made me turn " << color << " and extremely ill. I came" << endl;
    cout << "down with a fever of " << temperature << " degrees. Next, my" << endl;
    cout << adjective << " pet " << petanimal << " must have smelled the remains" << endl;
    cout << "of the " << food << " on my homework, because he ate" << endl;
    cout << "it. I am currently rewriting my homework and" << endl;
    cout << "hope you will accept it late." << endl << endl;
    cout << "Sincerely," << endl;
    cout << studentname << endl;
}
