/*

Dela Cruz Jan Emmanuel
11 - Ezra
Activity 8
5/4/23

*/

#include <iostream>

using namespace std;

int main() {
	
	int num,i;
	unsigned long long factorial = 1;
    
    cout << "Enter a number: ";
    cin >> num;
    
    for(i = 1; i <= num; ++i){
    	factorial *= i; 
	}
	
	cout << "Factorial of " << num << " = " << factorial << endl;
	
    
    
    

    return 0;
}
