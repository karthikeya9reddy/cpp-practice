#include <iostream>
using namespace std;

class employee
{
    int id;
    // static member variable
    static int count;

public:
    void setdata(void)
    {
        cout << " Enter the id" << endl;
        cin >> id;
        count++;
    }

    void getdata(void)
    {
        cout << "The id of this employee is " << id << "and this is employee number " << count << endl;
    }
// static member functions --> only used by static member variable

    static void getcount(void)
    {
        // cout<<id;---=-----> throws an error
        cout << "the value of count is " << count << endl;
    }
// to call this function use employee :: getcount();
};

// int employee :: count; // Default vlaue is 0
int employee ::count = 1000; // Default vlaue is 0

int main()
{
    employee harry, lovish, rohan;

    harry.setdata();
    harry.getdata();
    employee ::getcount();

    lovish.setdata();
    lovish.getdata();
    employee ::getcount();

    rohan.setdata();
    rohan.getdata();
    employee ::getcount();

    return 0;
}