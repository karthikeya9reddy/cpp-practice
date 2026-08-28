// Revisiting Pointers: new and delete Keywords
#include <iostream>
using namespace std;

int main()
{
    // revison of pointers
    int a = 774;
    int *ptr = &a;
    cout << "the adress of a is " << &a << endl;
    cout << "the value stored at a is " << *ptr << endl;

    // new operator
    // int *p = new int(40);
    float* p = new float(40);
    cout << "the value at address p is " << *p << endl;

    int* arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;
    //delete[] arr;----->delete operator
    cout<<"the value of arr[0] is: "<<arr[0]<<endl;
    cout<<"the value of arr[1] is: "<<arr[1]<<endl;
    cout<<"the value of arr[2] is: "<<arr[2]<<endl;
    cout<<"the value at address stored arr is  "<<*arr<<endl;

    
    

    return 0;
}