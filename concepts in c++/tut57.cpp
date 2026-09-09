//C++ Templates: Templates with Multiple Parameters
#include <iostream>
using namespace std;
/*
template <class t1, class t2>
class nameOfClass{
     /code/
}
*/

template <class t1, class t2>
class myclass{
   public:
     t1 data1;
     t2 data2;
      myclass(t1 a, t2 b){
        data1 = a;
        data2 = b;
      }

     void display(){
        cout<<this->data1<<endl<<this->data2;
     }
};
int main(){
    myclass<char, int>obj('D', 7);
    obj.display();
    
    return 0;
}

/*
summary of the video

Templates with multiple parameters: The instructor demonstrates how to declare multiple template types (e.g., template) to allow a single class to handle different combinations of data types simultaneously (0:42-1:30).
Syntax and Application: By defining custom types (T1, T2) in the class template, you can create objects that accept various data types like int, float, or char without needing to write separate classes for each combination (2:33-3:00).

Constructor usage: The tutorial illustrates using a constructor to initialize these generic members, showing how a class can dynamically adapt to the data provided during object creation (3:40-4:35).

Flexibility and Efficiency: Using templates significantly reduces the need for redundant class code, offering a cleaner and more efficient approach to programming that is essential for competitive programming and mastering the Standard Template Library (STL) (5:16-5:45).
*/