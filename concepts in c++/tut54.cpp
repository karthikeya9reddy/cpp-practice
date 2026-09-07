#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // connecting our file with hout stream
    ofstream hout("sample1_53.txt");

    // creating a name string and filling in with the string entered by the user
    cout<<"enter your name"; 
    string name;
    cin>>name;

    // writing a string to the file
    hout<<name<<" is my name";

    // disconnects our file with hout stream
    hout.close();

    ifstream hin("sample1_53.txt");
    string content;
    // hin>>content;
    getline(hin, content);
    cout<<"the content of this file is: "<<content;
    hin.close();

    return 0;
}