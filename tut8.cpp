#include <iostream>
using namespace std;

int main() {
     
    // selection control structures : "if else - if else ladder"

    int age;
    cout << "tell me your age :  "; 
    cin>> age;
    // if ((age<18) && (age>0)) {

    // cout<<"you cannot enter the party "<<endl;
    // }

    // else if (age == 0){
    //     cout<<"ha ha ha you are not yet born "<<endl;
    // }

    // else if (age == 18) {
    //     cout<<"you are on the boder line of eligibility you can stay for 4 hours "<<endl;
    // }

    // else {
    //     cout<<"you can enter the party you can enjoy the party !!!"<<endl;
    // }
    
    // selection control structure : "switch - case"

    switch (age) {

    case 18 : 
    cout<<"you are 18 "<<endl;
    break;

    case 22 :
    cout<<"you are 22 "<<endl;
    break; 

    case 2 : 
    cout<<"you are 2 "<<endl;
    break;

    default : 
    cout<<"the case is invalid "<<endl;
    break;


 }
    
    cout<<"you are done with the cases "<<endl;




    return 0;
}
