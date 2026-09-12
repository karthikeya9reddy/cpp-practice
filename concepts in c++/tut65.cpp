// Map In C++ ST
#include <iostream>
#include <map>
#include <string>
using namespace std;

// map is an associative array
int main(){
    map<string, int> marksmap;
    marksmap["harry"] = 98;
    marksmap["jack"] = 59;
    marksmap["rohan"] = 2;

    marksmap.insert({{"kozume", 169}, {"kuroo", 187}});
    map<string, int> :: iterator iter;
    for(iter=marksmap.begin(); iter!=marksmap.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
     //to find out size, max_size, empty
    cout<<"the size is: "<<marksmap.size()<<endl;
    cout<<"the max size is: "<<marksmap.max_size()<<endl;
    cout<<"the empty is: "<<marksmap.empty()<<endl;
    
    return 0;
}

/*
summary of the video 

Maps (Key-Value Pairs): Maps function by associating a unique key with a specific value. For example, you can map student names (keys) to their corresponding test marks (values) (1:40 - 2:28).

Iterators (iterator): These are used to traverse the map. By defining an iterator (e.g., map::iterator it), you can loop through the entire collection (4:41).

Methods for Navigation:
begin(): Returns an iterator pointing to the first element in the map (5:12).
end(): Returns an iterator pointing just past the last element in the map (5:29).
Accessing Data: When using an iterator, you can access the key using it->first and the value using it->second (6:06 - 7:27).
Insertion (insert): The insert method allows you to add new key-value pairs to the map, typically using a pair object (8:37 - 9:35).

Capacity Methods:
size(): Returns the number of elements currently in the map (10:29).
empty(): A boolean check to see if the map contains any elements (10:48).
max_size(): Returns the maximum number of elements the map can theoretically hold (11:04).
*/