#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number, exponent;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Enter an exponent: ";
    cin >> exponent;

    int result = pow(number, exponent);

    cout << number << " raised to the power of " << exponent << " is " << result << endl;

    return 0;
}
