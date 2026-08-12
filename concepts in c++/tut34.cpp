#include <iostream>
using namespace std;

// base class
class employee{
public:
     int id;
     float salary;
     employee(){}
     employee(int inpid){
     id = inpid;
     salary = 34.0;
  }   
     
};

// derived class syntax
/*
class{{ derived-class-name }} : {{visibility-mode }} {{base-calss-name}} 
{
    class members/methods/etc...
}
note:    
1. default visibility mode is private. 
2. private visibility mode: public members of the base class becomes private members of the derived class. 
3. public visibility mode:  public members of the base class becomes public members of the derived class. 
4. private members are never inherited.
*/
//creating a programmer class derived from employee base class
class programmer : employee{
    public:
    programmer(int inpid){
      id = inpid;
    }
    void getdata(){
    cout<<id<<endl;
    }
        int languagecode = 9;
};

int main(){
    employee harry(1), rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer skillf(100);
    cout<<skillf.languagecode<<endl;
    //cout<<skillf.id<<endl; ---> cannot print id cus the visibility of inheritance is private 
    skillf.getdata();

    return 0;
}