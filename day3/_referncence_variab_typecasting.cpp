#include <iostream>
using namespace std;

int c = 45; // global variable

int main() {

// ****************builtin dataypes ****************

// int a ,b ,c; // local variable

// cout<<"enter the value of a is : ";
// cin>>a;

// cout<<"enter the value of b is : ";
// cin>>b;
// c = a + b;
// cout<<"the value of c is :"<<c<<endl;
// cout<<"the value of global c is :"<<::c; // :: is the scope resolution operator 

// **************** float, double, long double literals ****************

// float d = 34.4F; // Fis used to tell the compiler that this is a float value
// long double e = 34.4L; // L is used to tell the compiler that this is a long double value
// cout<<"the size of 34.4 is :"<<sizeof(34.4)<<endl;      // sizeof() is used to tell the compiler the size of the variable
// cout<<"the size of 34.4f is :"<<sizeof(34.4f)<<endl;
// cout<<"the size of 34.4F is :"<<sizeof(34.4F)<<endl;
// cout<<"the size of 34.4l is :"<<sizeof(34.4l)<<endl;
// cout<<"the size of 34.4L is :"<<sizeof(34.4L)<<endl;

// **************** reference variables **************** //reference variable is an alias for another variable.
//  It is used to refer to the same memory location as the original variable. It is declared using the & operator. 
// Reference variables are used to avoid copying large data structures and to allow functions to modify the original variable.

// float x = 455;
// float & y = x; // y is a reference variable to x and & is used to declare a reference variable
// cout<<x<<endl;
// cout<<y<<endl;

// **************** typecasting **************** //coverting one data type to another data type

int a = 45; 
float b = 45.6;
cout<<"the value of a is : "<<(float)a<<endl; // typecasting a to float
cout<<"the value of a is : "<<float(a)<<endl; // typecasting a to float
cout<<"the value of b is : "<<(int)b<<endl; // typecasting b to int
cout<<"the value of b is : "<<int(b)<<endl; // typecasting b to int
cout<<"the value of a is : "<<(double)a<<endl; // typecasting a to double
cout<<"the value of b is : "<<(long double)b<<endl; // typecasting b to long double 

cout<<"the expression is : "<<a+b<<endl; // typecasting a to float and b to int and then adding them
cout<<"the expression is : "<<a + int(b)<<endl; // typecasting a to float and b to int and then adding them
cout<<"the expression is : "<<(float)a + b<<endl; // typecasting a to float and b to int and then adding them



    return 0;   
}
