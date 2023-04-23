
#include <iostream>
using namespace std;

int main() {
    
    int number;
    
    cout << "ENTER A NUMBER: ";
    cin >> number;
    
    if(number % 2 == 0){
        cout << number << " is even.";
    }
    else{
        cout << number << " is odd.";
    }

    return 0;
}
