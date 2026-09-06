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

        virtual void display(){}
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
//rules for virtual functions//
1. they cannot be static 
2. they are accessed by object pointers
3. virtual functions can be a friend of another class
4. a virtual function in a base class might not be used
5. if a virtual function defined in a base class, there is no necessity of redefining it in the derived class
*/

/*
summary of the video 

The Base Class: A CodeWithHarry base class is created with protected members (title and rating) and a virtual function called display() (0:42 - 4:20).

Derived Classes: Two derived classes, CWHVideo and CWHText, inherit from the base class. Each class implements its own version of the display() function to provide specific details, such as video length or word count (4:33 - 10:27).

Runtime Polymorphism: By using pointers of the base class type, the program demonstrates how the specific display() version from the derived class is called at runtime, thanks to the virtual keyword (16:41 - 18:00).

Rules for Virtual Functions (23:22 - 26:50):
Virtual functions cannot be static.
They are accessed using object pointers.
They can be friends of another class.
A virtual function in a base class might not be used, but it must be defined.
If a derived class does not override the virtual function, the base class version will be executed by default.
*/