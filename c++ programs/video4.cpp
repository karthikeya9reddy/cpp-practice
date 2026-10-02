// c++ program to check alphabets using conditional operator
#include <iostream>
using namespace std;

int main(){
     char alph;
    cout<<"enter the alphabets: ";
    cin>>alph;

    (((alph>='a' && alph <='z') || (alph>='A' && alph <='Z'))) ?
    cout<<"It is a alphabet" : cout<<"It is not a alphabet";
    return 0;
}