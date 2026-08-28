// initialization list in constructors
#include <iostream>
using namespace std;

/*
syntac for initialization list in constructor:
constructor (argument-list) : initialization-section
{
     assignment + other code;
}

class test{
    int a;
    int b;
    public:
       test(int i, int j) : a(i), b(j){constructor-body}
};
*/

class test
{
    int a;
    int b;

public:
    // test(int i, int j) : a(i), b(j) 
    // test(int i, int j) : a(i+j), b(j) 
    // test(int i, int j) : a(i), b(2 * j) 
    // test(int i, int j) : a(i), b(a * j) 
    // test(int i, int j) :  b(j), a(i + b)  ----> red flag this will create prblm because a wil be intialized first.
    test(int i, int j)
    {
        a = i;
        b = j;
        cout << "constructor executed" <<endl;
        cout << "vlaue of a is "<<a<<endl;
        cout << "vlaue of b is "<<b<<endl;
    }
};

int main()
{
    test t(4,5);
    

    return 0;
}