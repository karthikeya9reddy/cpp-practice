#include <iostream>
using namespace std; 

// int factorial(int n){
//    if (n<=1) {
//     return 1;
//    }
//    return n* factorial(n-1);
// }

// int main(){
//     // Factorial of a number:
//     // 6!= 6*5*4*3*2*1 = 720
//     // 0! = 1 by defiantion 
//     // 1! = 1 by defination
//     // n! = n*(n-1)!
//     int a;
//     cout<<"entrer the value a: "<<endl;   
//     cin>>a;
//     cout<<"the factorial of "<<a<<" is: "<<factorial(a)<<endl;
//     return 0;
// }

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int main(){
using namespace std;

int a; 
cout<<"enter the value of a:"<<endl;
cin>>a;
cout<<"The term in fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl;
return 0;
}