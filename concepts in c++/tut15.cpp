#include <iostream>
using namespace std;
int sum(int a, int b){
int c = a+b;
return c;
}

// 1) This will not swap a and b 
void swap(int a, int b){ //temp a b   
int temp = a;            // 4    4 5 
a = b;                   //4    5 5
b = temp;               // 4    5 4
} 

// 2) This will swap a and b 
//Call by reference using pointers 
void swapPointer(int* a, int* b){ //temp a b   
int temp = *a;            // 4    4 5 
*a = *b;                   //4    5 5
*b = temp;               // 4    5 4
}

// 3) This will swap a and b 
//Call by reference using C++ reference variables
//void swapReferenceVar(int &a, int &b){ //temp a b   
// int temp = a;            // 4    4 5 
// a = b;                   //4    5 5
// b = temp;               // 4    5 4
// }

int & swapReferenceVar(int &a, int &b){ //temp a b   
int temp = a;            // 4    4 5 
a = b;                   //4    5 5
b = temp; 

return a;

}


int main(){
    int x = 4, y = 5;
    // cout<<"the sum of 8 and 9 is "<<sum(8,9)<<endl;
    cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swap(x, y);            //--> 1) This will not swap a and b
    //swapPointer(&x, &y);   //--> 2) This will swap a and b using pointer reference
    //swapReferenceVar(x, y); //--> 3) This will swap a and b using reference variable
    swapReferenceVar(x, y) = 655;

    cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
    
    
    return 0;
}