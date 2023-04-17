/*

Dela Cruz Jan Emmanuel
Ezra
Sir Jude
Act 6

*/
#include <iostream>

using namespace std;

int main()
{
    int quantity;
    double price,finalNoDiscount,finalDiscount;

    cout << "Enter price per unit: ";
    cin >> price;

    cout << "Enter Total Quantity: ";
    cin >> quantity;

    if(quantity < 1000){
        finalNoDiscount = price * quantity;
        cout << "Total Cost: " << finalNoDiscount << " Pesos";
    }
    else if(quantity >= 1000){
        finalDiscount = (price * quantity) * 0.9;
        cout << "Discounted Cost: " << finalDiscount << " Pesos";
    }

    return 0;
}
