// Virtual Functions in C++
#include <iostream>
using namespace std;

class baseclass{
     public:
       int var_base = 123;
       virtual void display(){
        cout<<"displaying base class variable var_base "<<var_base<<endl;
       }
};

class derivedclass: public baseclass{
       public:
       int var_derived = 234;
       void display(){
        cout<<"displaying base class variable var_base "<<var_base<<endl;
        cout<<"displaying derived class variable var_derived "<<var_derived<<endl;
       }
};

int main(){
    baseclass *base_class_pointer;
    baseclass obj_base;
    derivedclass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();
}
/*
summary of the video 

The Problem: By default, if you use a pointer of a base class type to point to an object of a derived class, calling a function will execute the base class version of that function, even if you intended for the derived one to run (0:44 - 1:05).

The Solution: By declaring a function as virtual in the base class, you inform the compiler that you want to enable runtime polymorphism. This ensures that the derived class version of the function is executed instead, even when accessed through a base class pointer (1:59 - 2:23).

Implementation: The presenter demonstrates this by modifying a sample program (2:30 - 4:45), showing that simply adding the virtual keyword to the function declaration in the base class correctly overrides the default behavior and executes the function belonging to the derived class (5:12 - 6:04).

Core Concepts:

Runtime Polymorphism: The binding of a function call to an object happens during runtime rather than compile-time when using virtual functions (7:09 - 7:30).

Comparison to Compile-time: The video briefly contrasts this with compile-time polymorphism (e.g., function overloading), where the compiler determines which function to call based on the arguments provided (7:42 - 8:05).
*/