#include <iostream>
using namespace std;

int main(){
    long double a,b;
    cout<<"enter the value of a: "<<endl; 
   cin>>a;
    cout<<"enter the value of b: "<<endl;
    cin>>b;
    char op;
    cout<<"enter the sign: "<<endl;
    cin>>op;

    if(op == '+'){
       cout<<"the value of a+b is: "<<a+b<<endl;
    }
    else if (op == '-'){
       cout<<"the value of a-b is: "<<a-b<<endl;
    }
    else if (op == '*'){
       cout<<"the value of a*b is: "<<a*b<<endl;
    }
    else if (op == '/'){
       cout<<"the value of a/b is: "<<a/b<<endl;
    }
    else{
        cout<<"!!invalid input!!"<<endl;
    }

    
    return 0;
}