#include <iostream>

using namespace std;

int main()
{

    cout << "GUESS THE COLOR (3 lives)" << endl;

    int lives = 3;
    string answer;

    while(lives != 0){
        cout << "What is the secret color?" << endl;

        cout << "Answer: ";
        cin >> answer;

        if(answer == "orange"){
            cout << "Your guess is correct!";
            break;
        }
        else{
            lives --;
            if(lives == 0){
                cout << "You lose!";
            }
        }
    }


}
