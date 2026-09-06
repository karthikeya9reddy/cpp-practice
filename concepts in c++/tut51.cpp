//Abstract Base Class & Pure Virtual Functions in C++
#include <iostream>
#include <cstring>
using namespace std;

class CWH{
     protected:
       string title;
       float rating;

    public:
        CWH(string s, float r){
          title = s;
            rating = r; 
        }   

        virtual void display() = 0; // do-nothing function --> pure vitual function
};

class CWHvideo: public CWH{
    float videolength;
    public:
      CWHvideo(string s, float r, float vl): CWH(s,r){
        videolength = vl;
      }

      void display(){
        cout<<"this is an amazing video with title "<<title<<endl;
        cout<<"ratings: "<<rating<<" out of 5 stars"<<endl;
        cout<<"length of this video is: "<<videolength<<" minutes"<<endl;
      }
};

class CWHtext: public CWH{
    int words;
    public:
      CWHtext(string s, float r, int wc): CWH(s,r){
        words = wc;
      }

      void display(){
        cout<<"this is an amazing text tutorial with  title "<<title<<endl;
        cout<<"ratings of this text tutorial is: "<<rating<<" out of 5 stars"<<endl;
        cout<<"no of words in this text tutorial is: "<<words<<" words"<<endl;
      }
};

int main(){
    string title;
    float rating, vlen;
    int words;

    // for code with harry video
    title = "django tutorial";
    vlen = 4.52;
    rating = 4.89;
    CWHvideo djvideo(title, rating, vlen);
    // djvideo.display();

     // for code with harry text
    title = "django tutorial textual";
    words = 452;
    rating = 3.89;
    CWHtext djtext(title, rating, words);
    // djtext.display();

    CWH* tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}

/*
summary of the video

Abstract Base Class: A class designed specifically to be inherited from, rather than used to create objects directly. It serves as a template for derived classes (2:53 - 3:05).

Pure Virtual Function: A virtual function in the base class that is assigned to zero (= 0). This is known as a "do-nothing" function, which forces derived classes to provide their own implementation (4:59 - 5:25).

Why use them?
They enforce an interface, ensuring that any derived class must override the pure virtual function to be functional (4:45 - 5:00).

This design pattern is highly useful in real-world scenarios, such as creating a base class for different car music systems where specific models must implement their own display logic (7:50 - 8:50).

Important Note: If a derived class does not implement the pure virtual function, the code will fail to compile (5:36 - 6:00).
*/