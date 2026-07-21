#include <iostream>
using namespace std;

int main(){

    // types of loops in c++
    // 1. for loop 
    // 2.while loop
    // 3.do-while loop

    /*For loop in c++*/  
    //  syantax for loop //
    //    for (intialization; condition; updation ) {
    //           loop body (c++ code);
    //    }

    // example 1
    // for(int i = 0; i <= 100; i++ ) {
    // cout<<i<<endl;
    // }

    // example 2: infinity loop 
    // for(int i=0; 70<=100; i++) {
    //  cout<<i<<endl;
    // }

    /*while loop in c++*/ 
    // syantax :
    // while (condition) {
    //     c++ code;
    // }

    //example 1:
    // int i = 1;
    // while(i<=10){
    // cout<<i<<endl;
    // i++;
    // }

    //example 2: for infinite loop
    // int i = 1;
    // while(1<=10){
    // cout<<i<<endl;
    // i++;
    // }

    /*do while loop in c++*/
    // syantax:
    // do
    // {
    //     c++ code;
    // while(condition);
    // }

    // example 1
    int i= 1;
    do
    {
        cout<<i<<endl;
        i++;
    } while (i>=10);
    
    


    return 0;
}