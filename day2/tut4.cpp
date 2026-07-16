#include <iostream>
// there are two types of header files:
// 1. System header files: These are the header files that come with the compiler.
// For example: #include <iostream>, #include <cmath>, etc. --> refer cppreference.com for more information on system header files.

// 2. User-defined header files: These are the header files that are created by the user.
//  For example: #include "myheader.h", #include "myheader.cpp", etc. ---> the file "myheader.h"must be in the directory of the source file or in the include path of the compiler
using namespace std;
int main() {
    int a = 4 , b = 5;
    cout<< "operators in c++"<<endl;
    cout<< "the following are operators in c++"<<endl;
// 1.Arthimatic operators 
    cout<< "the value of a + b is :"<<a+b<<endl;
    cout<< "the value of a - b is :"<<a-b<<endl;
    cout<< "the value of a * b is :"<<a*b<<endl;
    cout<< "the value of a / b is :"<<a/b<<endl;
    cout<< "the value of a % b is :"<<a%b<<endl;
    cout<< "the value of a++ is :"<<a++<<endl;
    cout<< "the value of a--  is :"<<a--<<endl;
    cout<< "the value of ++a is :"<<++a<<endl;
    cout<< "the value of --a is :"<<--a<<endl;

// 2. Assignment operators
    // int c = 5; float b = 3.5; char d = 'd'; bool e = true;

// 3. Comparison operators
    cout<< "the value of a == b is :"<<(a==b)<<endl;
    cout<< "the value of a != b is :"<<(a!=b)<<endl;
    cout<< "the value of a >= b is :"<<(a>=b)<<endl;
    cout<< "the value of a <= b is :"<<(a<=b)<<endl;
    cout<< "the value of a > b is :"<<(a>b)<<endl;
    cout<< "the value of a < b is :"<<(a<b)<<endl; 

// 4. Logical operators
    cout<< "the value of this logical operator ((a==b) && (a<b)) is :"<<((a==b) && (a<b))<<endl;
    cout<< "the value of this logical operator ((a==b) || (a<b)) is :"<<((a==b) || (a<b))<<endl;
    cout<< "the value of this logical operator (!(a==b)) is :"<<(!(a==b))<<endl; 
    return 0;
}

