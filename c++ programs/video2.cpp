//C++ program to check whether a character is alphabet, digit or special character
#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter any character: ";
    cin>>ch;

    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
        cout<<ch<<" is an alphabet!!"<<endl;
    }
    else if(ch >='0' && ch<='9'){
        cout<<ch<<" is an digit!!"<<endl;
    }
     else{
        cout<<ch<<" is a special character"<<endl;
     }
    return 0;
}