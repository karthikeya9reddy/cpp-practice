//Function Objects (Functors) In C++ STL ----> last video ❤️ :)
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main(){
    //function objects(functor): function warapped in a class so that it is available like an object
    int arr[] = {1, 73, 4, 2, 54, 7};
    // sort(arr, arr+5)
    sort(arr, arr+5, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
} 

/*
summary of the video

What is a Functor? A functor is essentially a class that wraps a function by defining the operator(). This allows an object to be invoked like a standard function, enabling it to be used within object-oriented paradigms (0:54 - 2:04).

Practical Usage in STL: The video demonstrates how functors are passed to algorithms like sort(). By default, sort() organizes elements in ascending order, but passing a functor (such as the built-in greater()) allows the algorithm to sort in descending order (5:45 - 7:03).

Header Requirements: To use these pre-defined function objects, you must include the `` header file (2:33 - 2:43).

Resources for Exploration: The creator emphasizes that there are many built-in functors available (like plus, multiplies, negate, etc.) and encourages viewers to explore documentation via sites like cppreference.com rather than memorizing every single function
*/