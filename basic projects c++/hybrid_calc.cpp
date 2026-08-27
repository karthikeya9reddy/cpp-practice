#include <iostream>
#include <cmath>
using namespace std;

class simplecalculator
{
    int a, b;

public:
    void getdatasimple()
    {
        cout << "enter the value of a " << endl;
        cin >> a;
        cout << "enter the value fo b" << endl;
        cin >> b;
    }

    void performoperationssimple()
    {
        cout << "the value of a + b is: " << a + b << endl;
        cout << "the value of a - b is: " << a - b << endl;
        cout << "the value of a * b is: " << a * b << endl;
        cout << "the value of a / b is: " << a / b << endl;
    }
};

class scientificcalc
{
    int a, b;

public:
    void getdatascientific()
    {
        cout << "enter the value of a " << endl;
        cin >> a;
        cout << "enter the value fo b" << endl;
        cin >> b;
    }

    void performoperationsscientific()
    {
        cout << "the value of cos(a) is: " << cos(a) << endl;
        cout << "the value of sin(a) is: " << sin(a) << endl;
        cout << "the value of exp(a) is: " << exp(a) << endl;
        cout << "the value of tan(a) is: " << tan(a) << endl;
    }
};

class hybridclaculator: public simplecalculator, public scientificcalc{
    
};

int main()
{

    // simplecalculator calc;
    // calc.getdatasimple();
    // calc.performoperationssimple();

    // scientificcalc calc2;
    // calc2.getdatascientific();
    // calc2.performoperationsscientific();

    hybridclaculator calc;
    calc.getdatascientific();
    calc.performoperationsscientific();
    calc.getdatasimple();
    calc.performoperationssimple();

    return 0;
}