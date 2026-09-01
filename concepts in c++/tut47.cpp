/* Polymorphism in C++  
- one name and multiple forms
- eg function overloading, operator overloading
- eg virtual functions
*/
#include <iostream>
using namespace std;

int main(){
    
    return 0;
}

/*
summary of the video

Polymorphism: Derived from Greek, it means "many forms." In programming, it represents the ability of an object to take on multiple forms or behave differently depending on the context (1:36).

Compile-time Polymorphism: A mechanism where the decision of which function to execute is made by the compiler during the compilation process. This is also known as Early Binding or Static Binding (7:42).

Run-time Polymorphism: A mechanism where the binding of a function call to an object is deferred until the program is actually executing. This allows the program to decide the behavior dynamically based on the object type (11:14).

Implementation Techniques
Function Overloading: A form of compile-time polymorphism where multiple functions share the same name but differ in their parameters (number or type) (3:39).

Operator Overloading: Another form of compile-time polymorphism where standard C++ operators (like +) are redefined to perform custom operations on user-defined objects (3:47).

Virtual Functions: The primary mechanism for achieving run-time polymorphism in C++. These functions allow derived classes to override base class functions, enabling dynamic dispatch (9:46).

Summary of Concepts
Binding: The process of linking a function call to a specific piece of code. In compile-time, this is done before execution; in run-time, it occurs while the program is running (7:47).

The Goal: The video emphasizes that understanding these concepts is crucial for writing flexible and modular code, promising deeper dives into virtual functions and pointers in future tutorials (13:52).
*/