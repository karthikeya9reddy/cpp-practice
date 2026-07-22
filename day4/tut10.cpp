#include <iostream>
using namespace std;

int main() {

    /*continue in loop*/
    
   //for(int i = 0; i < 40; i++)
    // {
    //     cout<<i<<endl;
    //     if(i==3){
    //     break;
    //     }
    // } 

    /*break in loops*/
    
    // for(int i = 0; i < 40; i++)
    // {
        
    //     if(i==3){
    //     break;
    //     }
    //     cout<<i<<endl;
    // }

    /*continue in loop*/

    for(int i = 0; i < 40; i++)
    {
        
        if(i==3){
        continue;
        }
        cout<<i<<endl;
    }
    return 0;
}