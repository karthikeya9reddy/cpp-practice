//Vector In C++ STL
#include <iostream>
#include <vector>
using namespace std;

template <class t>

void display(vector<t> &v){
    cout<<"displaying this vector"<<endl;
    for(int i = 0; i<v.size(); i++){
          cout<<v[i]<< ", ";
        //   cout<<v.at(i)<< ", ";
    }
    cout<<endl;
}

int main(){
    // ways to create a vector//

    vector<int> vec1;    // zero length vector 
    //  display(vec1);

    vector<char> vec2(4);  // 4-element character vector
    //  vec2.push_back('5');
    //  display(vec2);

    vector<char> vec3(vec2);  // 4-element character vector form vec2
    //  display(vec3);

    vector<int> vec4(4,13);  // 6-element vector of 3s
    display(vec4);
    cout<<vec4.size();

    // int element, size = 5;
    // cout<<"enter the size of the vector "<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"enter an element to add to this vector ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1,5, 566);
    // display(vec1);

    return 0;
}

/*
summary of the video

Vector Basics: Unlike traditional arrays with fixed sizes, vectors are defined using the std::vector syntax (0:58). They store elements in contiguous memory, enabling access via iterators (0:16).

Adding Elements (push_back): Used to insert a new element at the end of the vector, automatically triggering a resize if necessary (2:47).

Removing Elements (pop_back): Removes the last element from the vector (8:13).

Inserting Elements (insert): Allows insertion at a specific position using an iterator. The video demonstrates inserting single elements or multiple copies of an element (12:47).

Accessing Elements:
vector[i] syntax: Traditional array-like indexing (12:56).

vector.at(i): A safer alternative that performs boundary checking (13:00).

Vector Size (size()): Returns the current number of elements in the vector (4:31).

Iterators (begin()): Points to the first element, essential for traversing the vector or specifying insertion points (10:49).
 
Initialization: Vectors can be initialized in various ways, such as creating a vector of a specific size or pre-filling it with a default value (14:18).
*/