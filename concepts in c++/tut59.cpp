//C++ Function Templates & Function Templates with Parameters
#include <iostream>
using namespace std;

// float funcaverage(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

// float funcaverage(int a, float b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

template <class t1, class t2>
float funcaverage(t1 a, t2 b){
    float avg = (a+b)/2.0;
    return avg;
}

template<class t>
void swapp(t &a, t &b){
    t temp = a;
    a = b;
    b = temp;
}
int main(){
    float a;
     a = funcaverage(5,2);
     printf("the average of these numbers is %3f\n", a);

     int x=5, y=7;
     swapp(x,y);
     cout<<"the value of x is: "<<x<<endl<<"the vlaue of y is: "<<y<<endl;

    return 0;
}

/*
summary of the video

The Problem with Overloading: The video begins by demonstrating how creating separate functions (e.g., for int and float averages) leads to redundant code (0:45-3:50).

Function Templates: The instructor shows how to define a template using the template syntax. This allows a single function, like an average calculator, to handle different data types dynamically (4:01-4:53).

Practical Example - Swapping: Another common use case demonstrated is a generic swap function. By using templates, the function can swap values of any data type (including int, float, or char) without needing specific implementations for each (5:22-6:50).
*/