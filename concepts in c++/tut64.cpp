// List In C++ STL
#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // list of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);

    // methods for removing elements form the list :-
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(1);

    // sorting the list
    //  list1.sort();
    //  display(list1);

    // reversing the list
    list1.reverse();
    cout << "list1 one after reversing: ";
    display(list1);

    list<int> list2(3); // empty list of size 3
    list<int>::iterator iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 37;
    iter++;
    display(list2);

    // merging the lists
    //  list1.sort();
    //  list2.sort();
    //  list1.merge(list2);
    // cout<<"list 1 after merging with list 2: ";
    // display(list1);

    // swaping the lists
    list1.swap(list2);
    cout<<"list1 after swapig the list: ";
    display(list1);
    return 0;
}

/*
summary of the video

List (std::list): A sequence container implemented as a doubly-linked list. Unlike arrays (which use contiguous memory), lists store elements in non-adjacent locations, linking them through pointers (0:14, 4:14).


Doubly-Linked List: A data structure where each element (node) contains a link to both the next and the previous element, allowing for bidirectional traversal (0:06, 5:57).

Insertion and Deletion: The primary advantage of using a list is that inserting or removing elements in the middle of the container is highly efficient (constant time), as it doesn't require shifting subsequent elements like an array does (1:07, 2:05).

Access Speed: A key tradeoff is that lists do not support random access. To find a specific element, you must traverse the list using an iterator, making access slower than an array (4:47).

Iterator: A pointer-like object used to navigate through the container. list.begin() points to the first element, and list.end() points to the end of the list (8:23, 11:40).

STL Methods: The video demonstrates several essential functions for managing lists:
push_back(): Adds an element to the end of the list (7:41).
pop_back() / pop_front(): Removes elements from the end or beginning of the list (15:28, 16:33).
remove(): Removes all instances of a specific value from the list (17:07).
sort(): Reorders the elements in the list (19:51).
merge(): Combines two sorted lists into one (20:48).
reverse(): Reverses the order of elements in the list (22:20).
*/