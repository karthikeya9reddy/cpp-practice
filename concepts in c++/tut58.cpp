// C++ Templates: Class Templates with Default Parameters
#include <iostream>
using namespace std;

template <class t1 = int, class t2 = float, class t3 = char>
class karthik
{
public:
    t1 a;
    t2 b;
    t3 c;

    karthik(t1 x, t2 y, t3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
    }
};

int main()
{
    karthik<>k(12, 7.8, 'k');
    k.display();
    cout<<endl;
    karthik<float, char, char>g(1.2, 'r', 'k');
    g.display();
    return 0;
}

/*summary of the video 

Defining Default Parameters: You can assign default data types to class templates, similar to default arguments in functions (e.g., template). This allows objects to be instantiated without explicitly specifying every data type if the defaults are sufficient (1:16 - 1:44).

Implementation Example: The instructor demonstrates creating a class Harry with multiple template parameters. He shows how to create objects both by relying on default types and by manually overriding them with specific types like char or float (2:03 - 4:23).

Object Instantiation:
When using defaults, you can leave the template brackets empty or simply omit the types (3:34 - 4:12).
When specifying types, you must ensure the types provided are compatible with the class logic to avoid unexpected program behavior (5:01 - 6:51).

Best Practices: The instructor emphasizes that while the compiler might not throw an error for certain mismatched types, it can lead to logical errors or "misbehavior," so developers must be careful with type compatibility (6:10 - 7:01).
*/