#include <iostream>
using namespace std;

class base{
     protected:
          int a;
     private:
          int b;     
};

/*
for a protected member:
                     public derivation    private derivation    protected derivation

1. private members:     not inherited       not inherited            not inherited 
                                                  
2. public members:       public               private                  protected 

3. protected members:    protected            private                  protected 
*/

class derived: protected base{
//  protected can be accesed from derived class 
};
int main(){
    base c;
    derived d;
    // cout<<c.a<<endl; --> cannot be printed and accesed in main() because it is protected
    return 0;
}

/*
Public: Accessible inside the class, derived classes, and outside through an object. Can be printed/accessed from main().

Protected: Accessible inside the class and derived classes, but not from outside through an object. Cannot be directly printed/accessed from main().

Private: Accessible only inside the class that declares it. Cannot be directly accessed or printed from derived classes or main().\
*/