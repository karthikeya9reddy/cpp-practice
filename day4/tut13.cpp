#include <iostream>
using namespace std;

int main(){

/*struct in c++*/    

typedef struct employee {
int eid;
char favchar;
float salary;
}ep;

struct employee karthik;
// or//
ep harry;

karthik.eid = 1;
karthik.favchar = 'k';
karthik.salary = 999999999;

cout<<"the value of karthik eid is "<<karthik.eid<<endl;
cout<<"the value of karthik favchar is "<<karthik.favchar<<endl;
cout<<"the value of karthik salary is "<<karthik.salary<<endl;

harry.eid = 2;
harry.favchar = 'h';
harry.salary = 999999;

cout<<"the value of harry eid is "<<harry.eid<<endl;
cout<<"the value of harry favchar is "<<harry.favchar<<endl;
cout<<"the value of harry salary is  "<<harry.salary<<endl;
    
/*unions in c++*/

union money {
    int rice;
    char car;
    float pounds;
};

union money m1;
m1.rice = 44;
m1.car = 'g';
cout<<m1.rice<<endl;
cout<<m1.car<<endl;

/*enums in c++*/

enum meal {breakfast, lunch, dinner,};

meal m2 = lunch;
cout<<m2;

// cout<<breakfast<<endl;                          
// cout<<lunch<<endl;                          
// cout<<dinner<<end;

    return 0;
}