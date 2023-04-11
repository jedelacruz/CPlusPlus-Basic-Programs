#include <iostream>

using namespace std;

int main()
{

    int subj1,subj2,subj3,subj4,subj5;
    double result;

    cout << "GRADES MARKING PROGRAM" << endl << endl;

    cout << "Enter Subj1 Grade: ";
    cin >> subj1;
    cout << "Enter Subj2 Grade: ";
    cin >> subj2;
    cout << "Enter Subj3 Grade: ";
    cin >> subj3;
    cout << "Enter Subj4 Grade: ";
    cin >> subj4;
    cout << "Enter Subj5 Grade: ";
    cin >> subj5;

    result = (subj1 + subj2 + subj3 + subj4 + subj5) / 5;

    cout << endl;

    cout << "Grades: ";
    cout << result;

    cout << endl;

    cout << "Award: ";

    if (result > 100){
        cout << "Invalid Grade , Exceeds 100";
    }
    else if (result > 97 && result <= 100){
        cout << "With Highest Honors";
    }
    else if (result >= 95 && result < 98){
        cout << "With High Honors";
    }
    else if (result  >= 90 && result < 95){
        cout << "With Honors";
    }
    else if (result >= 85 && result < 90){
        cout << "Academic Achievers";
    }
    else if (result >= 75 && result < 85){
        cout << "Passed";
    }
    else if (result < 75){
        cout << "Failed";
    }


    return 0;

}
