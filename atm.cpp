#include <iostream>

using namespace std;

int main()
{
    int pin, pinCODE = 654321;
    int choice;
    int withdraw, deposit, balance = 0, fullBalance = 0;

    cout << "ATM SYSTEM" << endl << endl;

    while (true) {
        cout << "Enter pin code: ";
        cin >> pin;

        cout << endl;

        if (pin == pinCODE) {
            cout << "Login Successful" << endl << endl;

            while (true) {
                cout << "---------------------" << endl << endl;
                cout << "1. Check Balance" << endl;
                cout << "2. Withdraw Balance" << endl;
                cout << "3. Deposit Balance" << endl;
                cout << "4. Exit" << endl << endl;
                cout << "---------------------" << endl << endl;

                cin >> choice;
                cout << endl;

                switch (choice) {
                    case 1:
                        cout << "------ Check Balance ------" << endl << endl;
                        cout << "Balance: " << fullBalance << endl << endl;
                        break;
                    case 2:
                        cout << "------ Withdraw Balance ------" << endl << endl;
                        cout << "Withdraw: ";
                        cin >> withdraw;

                        if (withdraw > fullBalance) {
                            cout << "Insufficient Money" << endl << endl;
                        } else {
                            balance -= withdraw;
                            fullBalance -= withdraw;
                        }

                        break;
                    case 3:
                        cout << "------ Deposit Balance ------" << endl << endl;
                        cout << "Deposit: ";
                        cin >> deposit;

                        balance += deposit;
                        fullBalance += deposit;

                        cout << endl;
                        break;
                    case 4:
                        cout << "Thanks for using the ATM system!" << endl;
                        return 0;
                    default:
                        cout << "Invalid Choice" << endl;
                }
            }

            break;
        } else {
            cout << "Invalid account" << endl << endl;
        }
    }

    return 0;
}
