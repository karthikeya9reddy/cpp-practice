//multiple inheritance
#include <iostream>
using namespace std;

/*sytax for inheriting in multiple inheritance
class derived: visibility mode base1, visibility mode base2
{
class body of class "derived"
}
*/

class base1{
    protected:
    int base1;

    public:
      void data1(int a){
        base1 = a;
      }
};

class base2{
    protected:
    int base2;

    public:
      void data2(int a){
        base2 = a;
      }
};

class base3{
    protected:
    int base3;

    public:
      void data3(int a){
        base3 = a;
      }
};

class derived: public base1, public base2, public base3{
    public:
    void show(){
        cout<<"the value of base1 is "<<base1<<endl;
        cout<<"the value of base2 is "<<base2<<endl;
        cout<<"the value of base3 is "<<base3<<endl;
        cout<<"the sum of both bases is "<<base1 + base2 + base3<<endl;
    }
};

int main(){
     derived karthik;
     karthik.data1(35);
     karthik.data2(32);
     karthik.data3(32);
     karthik.show();
    return 0;
}