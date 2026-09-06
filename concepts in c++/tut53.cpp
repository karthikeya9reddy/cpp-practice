// File I/O in C++: Reading and Writing Files
#include <iostream>
#include <fstream>
using namespace std;
/*
the useful classes for working with files in c++ are: 
1. fstreambase
2. ifstream --> derived form fstreambase
3. ofstream --> derived form fstreambase
*/

/*
in order to work with files in C++, you will have to open it. primarily, there are to ways to open a file:
1. using the constructor 
2. using the member function open() of the class 
*/
int main(){
    string st = "harry bhai";
    string st2;
    //opening files using constructor and writing it
    ofstream out("sample1_53.txt"); //write operation
    out<<st;

    //opening files using constructor and reading it
    ifstream in("sample2_53.txt"); //read operation
    // in>>st2;
    getline(in, st2);
    getline(in, st2);
    cout<<st2;

    return 0;
} 

/*
summary of the video

Essential Classes: The video introduces three main classes derived from fstreambase:
fstream: For general file manipulation.
ifstream: Specifically for reading input from files (2:12).
ofstream: Specifically for writing output to files (2:14).

Opening Files: There are two primary methods for opening files in C++:
Using the Constructor: Opening the file immediately when creating the object (4:59).
Using the open() Member Function: Opening the file after the object has been initialized (3:58).

Practical Demonstrations:
Writing to a File: Demonstrated using an ofstream object to write string data to a file (6:14).
Reading from a File: Explained using an ifstream object. The instructor highlights that using basic extraction operators (>>) may skip spaces and newlines, so the getline() function is recommended for reading full lines of text (9:33).

The instructor concludes by noting that while these basics are sufficient for most introductory programming tasks, future tutorials will cover more advanced topics like end-of-file (EOF) detection and file pointers (12:34).
*/