#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // int a = 85;
    // cout<< "the value of a was : "<<a<<endl;
    // a = 89;
    // cout<< "the value of a is : "<<a<<endl;
    
    // Constants in C++

   //const int a = 85;
    //cout<< "the value of a was : "<<a<<endl;
    // a = 89; : the compiler will throw an error because we cannot change the value of a constant variable     
    // cout<< "the value of a is : "<<a<<endl;
    
// manipialators in C++
// int a = 85, b = 9, c = 8000;
// cout<< "the value of a without setw: "<<a<<endl;
// cout<< "the value of b without setw: "<<b<<endl;
// cout<< "the value of c without setw: "<<c<<endl;

// cout<< "the value of a with setw: "<<setw(4)<<a<<endl;
// cout<< "the value of b with setw: "<<setw(4)<<b<<endl;
// cout<< "the value of c with setw: "<<setw(4)<<c<<endl;

// operator precedence in C++
int a = 4, b = 5 , c = 6; 
int d = ((((a*b)+c)-45)+43);
cout<<d<<endl;

     

    return 0;
}