// Array of Objects Using Pointers
#include <iostream>
using namespace std;

class shopitem{
    int id;
    int price;
    public:
       void setdata(int a, int b){
        id = a;
        price = b;
       }
       void getdata(){
        cout<<"code of this item is "<<id<<endl;
        cout<<"price of this item is "<<price<<endl;
       }
};

/*
         1 2 3 
             ^
             |
             |
             |
             ptr
         ptrtemp 
*/
int main(){
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int [34];

    // 1. general store item
    // 2. veggies item 
    // 3. hardware item
    shopitem *ptr = new shopitem [size];
    shopitem *ptrtemp = ptr;
    int p, q;
    for (int i = 0; i < size; i++)
    {
       cout<<"enter id and price of item "<< i + 1<<endl;
       cin>>p>>q;
       ptr->setdata(p, q);
       ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout<<"item number: "<<i+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    
    
    return 0;
}