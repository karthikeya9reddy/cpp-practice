/* constructors in c++*/
#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // Creating a constructor
    // Constructor is a special member function with the same name as of the class
    // It is used to initiliaze the objects of its class
    // It is automatically invoked whenever an object is created
    // It is necessary to declare a constructor with the name of the class

    complex(void);   // Constructor declaration 

     void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

complex :: complex(void)  //-----> This is a default constructor as it accepts no parameters
{
      a = 10;
      b = 20;
      cout<<"hello complier"<<endl;
}


int main()
{
    complex c1, c2, c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();

    return 0;
}

/*Characteristics of constructors

1. It should declare in the public section of the class

2. They are automatically invoked whenever the object is created and   prints whatever it is in the constructor 

3. They cannot return values and do not have return types

4. It can have default arguments 

5. We cannot refer to their address

6. a class can have multuple constructors 
*/