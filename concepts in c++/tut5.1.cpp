#include <iostream>
using namespace std;

int x = 100;   // Global variable

void hello() {
    int x = 50;   // Local variable (belongs only to hello)
    cout << "Inside hello(): " << x << endl;
}

int main() {
    hello();

    cout << "Inside main(): " << x << endl;

    return 0;
}