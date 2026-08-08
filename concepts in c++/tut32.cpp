// copy constructor in c++
#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number() {};
    number(int num)
    {
        a = num;
    }

    // when there is no copy constructor is found, compiler supplies its own copy constructor

    number(number &obj)
    {
        cout << "copy constructor called!!! " << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "the number for this objects is " << a << endl;
    }
};

int main()
{
    number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    // z1 should exactly resemble z or x or y
    number z1(z); // copy constructor is invoked
    z1.display();

    z2 = z; // copy constructor not called here
    z2.display();
    
    number z3 = z; // copy constructor is invoked
    z3.display();
    return 0;
}