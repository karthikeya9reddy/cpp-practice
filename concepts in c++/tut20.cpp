// OOPS - classes and objects

// c++ --> initially called --> C with classes by stroustroup
//class --> extension of structures (in c)
//structures had limitations 
//         -->members are public
//         -->  no methods 
//classes -->  structures + more 
//classes --> can make few members as private & few aas piblic
// structures in cpp are typedefes 
//you can declare objects along with the class declration like this:
   /*class employee {
       calss defination
   }harry, rohan, lovish;*/
//harry.salary = it makes no sense if salary is private

//Nesting of member functions

#include <iostream> 
#include <string>
using namespace std;

class binary 
{
private:    
    string s; //--> by default private 

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);   
};

void binary :: read(void) 
{
    cout<<"enter the binary number "<<endl;
    cin>>s;
}

void binary :: chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
        
    }
    
}

void binary ::ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
        
    }
    
}

void binary :: display(void)
{
    cout<<"Displaying your binary"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
      cout<<s.at(i);  
    }
    cout<<endl;
}
int main()
{
    binary b;
    // b.s(); ---> error cus s is private 
    b.read();
    b.chk_bin();
    b.ones_compliment();
    b.display();
     
        return 0;
}