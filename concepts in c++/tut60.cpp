// Member Function Templates & Overloading Template Functions in C++
#include <iostream>
using namespace std;

template <class t>
class karthik
{
public:
    t data;
    karthik(t a)
    {
        data = a;
    }
    void display();
};

template <class t>
void karthik<t>::display()
{
    cout << data;
}

void func( int a ){
    cout<<"i am first func() "<<a<<endl;
}

template<class t>
void func1(t a ){
    cout<<"this is templatised func() "<<a<<endl; 
}

int main()
{
    // karthik<float> h(5.5);
    // cout << h.data << endl;
    // h.display();
    // return 0;

    //func(4);  // exact match takes the highest priority

    func1(4);  // exact match takes the highest priority
    func1<float>(4.5);
}