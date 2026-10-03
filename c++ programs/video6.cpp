//c++ program to calculate the total marks, percentage and division of student based on three subject 

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int rollno, phy, che, it, total;
    float percentage;
    char name[30], div[10];

    cout<<" Input the roll Number of the student : ";
    cin>> rollno;

    cout<<" Input the name of the student : ";
    cin>>name;

    cout<<"Input the marks of physics, chemisty and information technology";
    cin>>phy>>che>>it;

    total = phy + che + it;
    percentage = total/ 3.0;

    if (percentage >= 60 && percentage <= 100)
    {
        strcpy(div, "first");
    }
    else if (percentage < 60 && percentage >= 48)
    {
        strcpy(div, "second");
    }
    else if (percentage < 48 && percentage >= 36)
    {
        strcpy(div, "pass");
    }
    else{
        strcpy(div, "fail");
    }

    cout<<"roll no: "<< rollno << endl << "name of student: "<<name<<endl;

    cout<<"marks in physics: "<<phy<<endl;
    cout<<"marks in chemistry: "<<che<<endl;
    cout<<"marks in information tech: "<<it<<endl;
    cout<<"total marks = "<< total<<"/300"<<endl;
    cout<<"percentage = "<< percentage<<endl;
    cout<<"division = "<<div<<endl;
    return 0;
}