// C++ Program to Swap Two Numbers
#include <iostream>
using namespace std;

void swappointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 5, b = 8, temp;
    cout << "values before swapping " << endl;
    cout << "value of a is " << a << endl;
    cout << "value of b is " << b << endl;
    // swappointer(&a, &b);
    temp = a;
    a = b;
    b = temp;
    cout << "values after swapping " << endl;
    cout << "the value of a is " << a << endl;
    cout << "the value of b is " << b << endl;
    return 0;
}