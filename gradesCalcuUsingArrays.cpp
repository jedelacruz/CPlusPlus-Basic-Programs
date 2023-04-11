#include <iostream>

using namespace std;

int main()
{

    int grades[4];
    double result;

    cout << "Grades Calculator" << endl << endl;

    cout << "Enter first grade: ";
    cin >> grades[0];
    cout << "Enter second grade: ";
    cin >> grades[1];
    cout << "Enter third grade: ";
    cin >> grades[2];
    cout << "Enter fourth grade: ";
    cin >> grades[3];
    cout << "Enter fifth grade: ";
    cin >> grades[4];

    cout << "" << endl;

    result = (grades[0] + grades[1] + grades[2] + grades[3] + grades[4]) / 5;
    cout << result;

    return 0;
}
