// File I/O in C++: open() and eof() functions
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream out;
    out.open("sample55.txt");
    out<<"this is me and i my self"<<endl;
    out<<"i say oooh im blinded by the lights"<<endl;
    out<<"no i cant sleep untill i feel your touch"<<endl;
    out<<"i say oooh im drowning in the night"<<endl;
    out<<"ohh! when im like this your the one i trust"<<endl;
    out.close();

    ifstream in;
    string st;
    in.open("sample55.txt");
    // getline(in, st);
    // cout<<st;

    while (in.eof() ==0 )
    {
        getline(in, st);
        cout<<st<<endl;
    }
    
    in.close();
    return 0;
}
/*
summary of the video 

Writing to files: You can use the ofstream class to create an object and associate it with a file using the open() member function (0:30-1:15). Alternatively, you can use the file constructor directly. It is recommended to use the close() function after completing operations to ensure data integrity (1:45-2:10).

Reading from files: The ifstream class is used to read data. The video demonstrates reading individual words (3:10-4:00) and how to read an entire file line-by-line using getline() (4:20-5:15).

Checking End-Of-File (EOF): The eof() function is crucial for checking if the end of a file has been reached, typically used within a while loop to ensure all file contents are processed without error (4:55-5:40).
*/