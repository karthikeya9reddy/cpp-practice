// c++ program to check leap year using conditional operator
#include <iostream>
using namespace std;

int main(){
    int d;
    cout<<"enter the year: ";
    cin>>d;

    (d % 400 == 0 || (d % 4 == 0 && d % 100 != 0)) 
        ? cout << "it is a leap year" 
        : cout << "it is not a leap year";

    return 0;
}