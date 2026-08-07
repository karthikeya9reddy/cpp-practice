// dynamic initialization of objects using constructors 
#include <iostream>
using namespace std;

class bankdeposit{
    int principal;
    int years;
    float intrestrate;
    float returnvalue;

public:
    bankdeposit(){};
    bankdeposit(int p, int y, float r); // r can be a value like 0.04
    bankdeposit(int p, int y, int r);   // r can be a value like 14
    void show();
    
};

bankdeposit :: bankdeposit(int p, int y, float r){
    principal = p;
    years = y;
    intrestrate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1+intrestrate);
    }
    
}

bankdeposit :: bankdeposit(int p, int y, int r){
    principal = p;
    years = y;
    intrestrate = float(r)/100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1+intrestrate);
    }
}

void bankdeposit :: show(){
    cout<<endl<<"principal amount was "<<principal<<" and the return value after "<<years<<" years is "<<returnvalue<<endl;
}

int main(){
    bankdeposit bd1, bd2, bd3;
    int p, y, R;
    float r;

    cout<<"enter the value of p, y and r "<<endl;
    cin>>p>>y>>r;

     bd1 = bankdeposit(p, y, r);
     bd1.show();    

    cout<<"enter the value of p, y and R "<<endl;
    cin>>p>>y>>R;

     bd2 = bankdeposit(p, y, R);
     bd2.show();  
    

    return 0;
}