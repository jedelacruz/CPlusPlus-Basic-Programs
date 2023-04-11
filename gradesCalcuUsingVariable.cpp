#include <iostream>

using namespace std;

int main()
{

    int firstGrade,secondGrade,thirdGrade,fourthGrade,fifthGrade;
    double result;

    cout << "Grades Calculator" << endl << endl;

    cout << "Enter first grade: ";
    cin >> firstGrade;
    cout << "Enter second grade: ";
    cin >> secondGrade;
    cout << "Enter third grade: ";
    cin >> thirdGrade;
    cout << "Enter fourth grade: ";
    cin >> fourthGrade;
    cout << "Enter fifth grade: ";
    cin >> fifthGrade;

    cout << "" << endl;

    result = (firstGrade + secondGrade + thirdGrade + fourthGrade + fifthGrade) / 5;
    cout << result;

    return 0;
}
