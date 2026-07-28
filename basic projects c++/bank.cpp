#include <iostream>
using namespace std;

struct bank 
{
    int balance;
    int depositemoney;
    int withdrawmoney;
};

int main(){ 
struct bank zoro;
zoro.balance = 10000;
zoro.depositemoney;
zoro.withdrawmoney;
int choice;
cout<<"welcome to luffy bank "<<endl;
cout<<"choose the options from below"<<endl;
cout<<"1) check bank balance"<<endl;
cout<<"2) deposite your money"<<endl;
cout<<"3) withdraw your money"<<endl; 
cout<<"enter your option "; cin>>choice;

    if(choice == 1)
    {

    int pass;
    cout<<"Enter you pin to check your bank balance zoro "<<endl;
    cin>>pass;

    if (pass == 3434)
    {
        cout<<"your bank balance is Rs "<<zoro.balance<<endl;
    }
    
    else
    {
        cout<<"!!youve entered the wrong pin!!"<<endl;
        cout<<"please try again"<<endl;
    }
    
    }

    else if(choice == 2)
    {
        cout<<"enter the amount of money to deposite "; cin>>zoro.depositemoney;
        zoro.balance = zoro.balance + zoro.depositemoney;
        cout<<"current bank balance is "<<zoro.balance<<endl;
    }

    else if(choice == 3)
    {
        cout<<"enter the amount of money to withdraw "; cin>>zoro.withdrawmoney;

        if(zoro.withdrawmoney<zoro.balance)
        {
            zoro.balance = zoro.balance - zoro.withdrawmoney;
            cout<<"current bankbalance is "<<zoro.balance<<endl;
        }

        else if(zoro.withdrawmoney>zoro.balance)
        {
            cout<<"your bank balance is "<<zoro.balance<<endl;
            cout<<"insufficient balance you mosshead "<<endl;
        }
    }

    else
    {
        cout<<"incorrect option";
    }
    return 0;
}