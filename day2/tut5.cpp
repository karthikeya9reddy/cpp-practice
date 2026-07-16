#include <iostream>
using namespace std;
int glo = 6;
void sum() {
    int a = 3;
    cout<<glo<< a;
}
int main() {
       int glo = 9;
        glo = 267;
    // int a = 6;
    // int b = 7;
    // float c = 9.87;
    // bool d = false;
    sum();
    cout<< glo;
    // cout << "The value of a is: " << a << "\n the value of b is: " << b << d << "\n the value of c is: " << c;
    return 0;

    // example of local and global variable
    // local variable: declared inside a function
    // global variable: declared outside a function

}


// summary of global and local variables 

// // Need variable x?
//         │
//         ▼
// Is there a local x?
//        │
//    Yes ───► Use local x ✅
//        │
//       No
//        │
//        ▼
// Use global x ✅