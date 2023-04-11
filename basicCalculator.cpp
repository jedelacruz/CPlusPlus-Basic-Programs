#include <iostream>

using namespace std;

int main()
{

    cout << "+---------------- CALCULATOR ----------------+" << endl << endl;

    double num1,num2,total;
    int op;

    cout << "Enter the First Number: ";
    cin >> num1;

    cout << "Enter the Second Number: ";
    cin >> num2;

    cout << endl;

    cout << "What operator would you perform?" << endl;
    cout << "1 - Addition \n2 - Subtraction \n3 - Multiplication \n4 - Division \n: ";
    cin >> op;

    cout << endl;

    switch(op){
    case 1:
        total = num1 + num2;
        cout << total;
        break;
    case 2:
        total = num1 - num2;
        cout << total;
        break;
    case 3:
        total = num1 * num2;
        cout << total;
        break;
    case 4:
        total = num1 / num2;
        cout << total;
        break;
    default:
        cout << "Invalid Operator";
        break;
    }


    return 0;

}
