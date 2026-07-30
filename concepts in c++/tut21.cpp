#include <iostream>
using namespace std;
//arrays in class 
class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void intitcounter(void)
    {
        counter = 0;
    }

    void setprice(void);
    void displayprice(void);
};

void shop ::setprice(void)
{
    cout << "Enter the Id no of item " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "Enter the price of your item " << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{
    shop bazar;
    bazar.intitcounter();
    int n;
    cout << "Enter the no of items you have" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        bazar.setprice();
    }

    bazar.displayprice();

    return 0;
}