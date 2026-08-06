#include <iostream>
#include <cmath>
using namespace std;

class point{
     int x,y;
public:
    point(int a, int b);

    void displaypoint(){
        cout<<"the point is ("<<x<<","<<y<<")"<<endl;
    }
    friend int sol(point, point);
      
};

point :: point (int a, int b){
       x = a;
       y = b;
}

int sol(point a, point b){
    
     return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
    } 

int main(){
    
    point p(1,0), t(70,0); 

     p.displaypoint();

     t.displaypoint();

     cout<<"the distance between the two points is: "<<sol(p,t)<<endl;
     
    return 0;
}