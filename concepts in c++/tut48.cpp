// Pointers to Derived Classes in C++
#include <iostream>
using namespace std;

class baseclass{
     public:
       int var_base;
       void display(){
        cout<<"displaying base class variable var_base "<<var_base<<endl;
       }
};

class derivedclass: public baseclass{
       public:
       int var_derived;
       void display(){
        cout<<"displaying base class variable var_base "<<var_base<<endl;
        cout<<"displaying derived class variable var_derived "<<var_derived<<endl;
       }
};
int main(){
    baseclass *base_class_pointer;
    baseclass obj_base;
    derivedclass obj_derived;
    base_class_pointer = &obj_derived;// pointing base class pointer to derived class

    base_class_pointer->var_base = 56;
    // base_class_pointer->var_derived = 26; --> will throw an error  
    base_class_pointer->display();
    
    base_class_pointer->var_base = 56000;
    base_class_pointer->display();
    
    derivedclass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 68;
    derived_class_pointer->display();

    return 0;
}


/*
summary of the video

Base Class Pointers: The video demonstrates that a pointer of a base class type can legally point to an object of a derived class (7:50 - 8:05).

Late Binding (Static): When using a base class pointer to call a function (like display), the version defined in the base class is executed, even if the object being pointed to is an instance of the derived class (8:12 - 9:00). Attempting to access derived-class-specific members through this pointer will result in a compilation error (11:15 - 12:00).

Derived Class Pointers: Conversely, if you use a pointer of the derived class type, you can access members belonging to the derived class (13:42 - 14:35).

Key Takeaways:
The compiler decides which function to bind based on the pointer type rather than the object type, which is referred to as early or late binding depending on the context of function calls (1:14 - 1:22, 10:45 - 11:05).

Understanding this behavior is essential for implementing runtime polymorphism, where the decision of which function definition to execute is deferred until the program is running (15:52 - 16:16).
*/