#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student ::set_roll_number(int r)
{
    roll_number = r;
}

void student ::get_roll_number()
{
    cout << "the roll number is " << roll_number << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void exam ::get_marks()
{
    cout << "the marks obtained in maths are: " << maths << endl;
    cout << "the marks obtained in physics are: " << physics << endl;
}

class result : public exam
{
    float percentage;

public:
    void display()
    {
        get_roll_number();
        get_marks();
        cout << "your percentage is " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    result harry;
    harry.set_roll_number(34);
    harry.set_marks(94, 90);
    harry.display();
    return 0;
}

/*
notes:
A. if we are inheriting b from a and c from b: [a--->b--->c]
   1. a is the base class for b and b is base class for c
   2. a--->b--->c is called inheritance path
*/