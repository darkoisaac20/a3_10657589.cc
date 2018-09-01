#include <iostream>

using namespace std;

int main()
{
    double score;
    cout << "Enter your score: ";
    cin >> score;

    if((score >=80) && (score <=100)){
            cout << "Grade =  " << "A" << endl;
       }
       else if((score >= 75) && (score <= 79)){
            cout << "Grade = " << "B+" << endl;
       }
       else if((score >= 70) && (score <= 74)){
            cout << "Grade = " << "B" << endl;
       }
       else if((score >= 65) && (score <= 69)){
            cout << "Grade = " << "C+" << endl;
       }
       else if((score >= 60) && (score <= 64)){
            cout << "Grade = " << "C" << endl;
       }
       else if((score >= 55) && (score <= 59)){
            cout << "Grade = " << "D+" << endl;
       }
       else if((score >= 50) && (score <= 54)){
            cout << "Grade = " << "D" << endl;
       }
       else if((score >= 45) && (score <= 49)){
            cout << "Grade = " << "E" << endl;
       }
       else if((score >= 0) && (score <= 44)){
            cout << "Grade = " << "F" << endl;
       }
       else{
            cout << "Invalid score! Enter a number between the range of 0-100." << endl;
       }
    return 0;
}
