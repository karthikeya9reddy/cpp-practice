#include <iostream>
using namespace std;

int main(){
    // Array example
    int marks[] = {32, 45, 78, 98};
    
    // int mathmarks[4];
    // mathmarks[0] = 24;
    // mathmarks[1] = 54;
    // mathmarks[2] = 29;
    // mathmarks[3] = 47;

    // cout<<"these are the mathmarks "<<endl;
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl; 
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;

    // cout<<"these are the marks "<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl; 
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // // changing the value of array 
    // marks[2] = 344;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl; 
    // cout<<"the marks after changing the value: "<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // cout<<"arrays in for loop"<<endl;

    // for (int i = 0; i<4; i++){
         
    // cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;

    // }

    // cout<<"arrays in while loop"<<endl;

    // int i = 0;
    // while(i<4) {

    // cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    // i++;

    // }

    // cout<<"arrays in do while loop"<<endl;
    // do{
    //     cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }while(i<4);

    // pointers in arrays
     int* p = marks;

     cout<<*(p++)<<endl;
     cout<<*(++p)<<endl;

    //  cout<<"the value of *p is "<<*p<<endl;
    //  cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
    //  cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
    //  cout<<"the value of *(p+3) is "<<*(p+3)<<endl;




    return 0;
}