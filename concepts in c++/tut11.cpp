#include <iostream>
using namespace std;

int main(){
    // what is pointer ----> data type which holds the adderess of other data types 

    /*& --> (Address of) operator*/

    int a =3;
    int* b= &a;
    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of a is "<<b<<endl;

    /* "*" --->(value at) Dereference operator*/
    
    cout<<"the value at address b is "<<*b<<endl;

    // pointer to pointer 

    int** c = &b;
    cout<<"the address of b is "<<c<<endl;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the value of c is "<<**c<<endl;
    
    return 0;
}