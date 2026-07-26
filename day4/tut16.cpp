#include <iostream>
using namespace std; 

/*inline function */

//inline = Inline function: suggests that the compiler can put the function's code directly at the place it's called
// inline int product(int a, int b){
//     return a*b;       
// }

// int main(){
//     int x, y;
//     cout<<"enter the value x and y "<<endl;
//     cin>>x>>y;
//     cout<<"the product of x and y is : "<<x*y<<endl;
//     cout<<"the product of x and y is : "<<x*y<<endl;
//     cout<<"the product of x and y is : "<<x*y<<endl;
//     cout<<"the product of x and y is : "<<x*y<<endl;
//     cout<<"the product of x and y is : "<<x*y<<endl;
//     cout<<"the product of x and y is : "<<x*y<<endl;
//     cout<<"the product of x and y is : "<<x*y<<endl;
//    return 0;
   
// }

/*static variable */

 //int product(int a, int b){
//do not use inline functions when using static variable
//     static int c = 0;//--->this executed only once
//     c = c+1;//--->next time this function is runed, the value of c will be retained 
   // return a*b;     
 //}

// int main(){
//     int x, y;
//     cout<<"enter the value x and y "<<endl;
//     cin>>x>>y;
//     cout<<"the product of x and y is : "<<product(x, y)<<endl;
//     cout<<"the product of x and y is : "<<product(x, y)<<endl;
//     cout<<"the product of x and y is : "<<product(x, y)<<endl;
//     cout<<"the product of x and y is : "<<product(x, y)<<endl;
//     cout<<"the product of x and y is : "<<product(x, y)<<endl;
//     cout<<"the product of x and y is : "<<product(x, y)<<endl;
//     cout<<"the product of x and y is : "<<product(x, y)<<endl;

//    return 0;
   
// }

  /*default arguments*/

 float moneyrecevied(int currentmoney, float factor=1.04){
   return currentmoney * factor;
 }

int main(){
   int money;
   cout<<"enter the money you get: "<<endl;
   cin>>money;

   cout<<"if you have "<<money<<" Rs in your bank account, you will recieve money "<<moneyrecevied(money)<<" after one year "<<endl;
   cout<<"for vip: if you have "<<money<<" Rs in your bank account, you will recieve money "<<moneyrecevied(money, 1.1)<<" after one year "<<endl;

    


   return 0;
   
}

//int strlen(const char *p){
//}

