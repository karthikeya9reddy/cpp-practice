#include <iostream>
using namespace std;

/*functions in c++*/

// int sum(int a , int b){
//     int c = a+b;
//     return c;
// }

// int main(){
//     int num1 , num2;
//     cout<<"enter the first value : "<<endl;
//     cin>>num1;
//     cout<<"enter the second value : "<<endl;
//     cin>>num2;

// cout<<"the sum of the two values are : "<<sum(num1, num2)<<endl;
     
//     return 0;
// }

/*function prototype*/ 

//type functions-name (arguments);
//int sum(int a, int b ); //--> Acceptable
//int sum(int a, b ); //--> not Acceptable
 int sum(int , int  ); //--> Acceptable
void g(void); //--> Acceptable
void g(); //--> Acceptable

int main(){
    int num1 , num2;
    cout<<"enter the first value : "<<endl;
    cin>>num1;
    cout<<"enter the second value : "<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters

    cout<<"the sum of the two values are : "<<sum(num1, num2)<<endl;
     g();
    return 0;
}

int sum(int a , int b){
    // formal parameters a and b will be taking value from actual 
    // parameters num1 and num2
    int c = a+b;
    return c;
}

void g(){
    cout<<"Hello, Good morning "<<endl;
}