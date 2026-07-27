/*function overloading*/

#include <iostream>
using namespace std;

int sum(float a, int b){
    cout<<"using functions with 2 arguments is "<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"using functions with 3 arguments is "<<endl;
    return a+b+c;
}

//calculating the volume of cylinder
int volume(float r, int h){
    return 3.14*r*r*h;
}

//calculating the volume of cube 
int volume(int a){
    return a*a*a;
}

//calculating the volume of rectangle
int volume(int l, int b, int h ){
    return l*b*h;
}

int main(){ 
    int r, h, a, l, b ;
    
    cout<<"the sum of 17 and 18  "<<sum(17, 18)<<endl;
    cout<<"the sum of 11, 23 and 143  "<<sum(11, 23, 143)<<endl;

    cout<<"enter the values of r and h to calculate the volume of cylinder "<<endl;
    cin>>r;
    cin>>h;
    cout<<volume(r, h )<<" is the volume of cylinder "<<endl;

    cout<<"enter the values of a to calculate the volume of cube "<<endl;
    cin>>a;
    cout<<volume(a)<<" is the volume of cube"<<endl;
     
    cout<<"enter the values of l, b and h to calculate the volume of rectangle "<<endl;
    cin>>l;
    cin>>b;
    cin>>h; 
    cout<<volume(l, b, h)<<" is the volume of rectangle";
     
    return 0;
}