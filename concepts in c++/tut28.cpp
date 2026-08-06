#include <iostream>
using namespace std;

class complex{
   int a, b;

public:
     complex(int,int);  // construct declaration 
     
     void printnumber()
     {
        cout<<"your number is "<< a <<"+"<< b << "i" <<endl;
     }
};

complex :: complex(int x, int y)  //-----> this a parameterized constructor as it takes 2 parameters 
{
    a = x;
    b = y;   
}

int main(){
    //implicit call
    complex a(4,6);
    a.printnumber();

    //explicit call
    complex b = complex(6,7);
    b.printnumber();

    return 0;
}