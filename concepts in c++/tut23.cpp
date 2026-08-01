/*arrays in objects*/
#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;
public:
    void setid(void)
    {
      salary=122;
      cout<<"enter the id of employee"<<endl;
      cin>>id;
    }

    void getid(void)
    {
        cout<<"the id of employee is "<<id<<endl;
    }
};

int main(){
//this method is not ideal if the employees are more 
    // employee harry, lovish, rohan, shruthi;
    // harry.setid();
    // harry.getid();

//array in object is best for this kind of problems
    employee benz[5];
    for (int i = 0; i < 5; i++)
    {
        benz[i].setid();
        benz[i].getid();
    }
    
    
    return 0;
}