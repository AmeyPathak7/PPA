#include <iostream>
using namespace std;

class Base
{
public:
    int i;
    int j;
    Base()
    {
        cout << " Base Constructor\n";
    }
};
class Derived : public Base
{
public:
    int k;
    Derived()
    {
        cout << " Derived Constructor\n";
    }
};
int main()
{
    Base bobj;
    Derived dobj;

    cout << "size of base is : " << sizeof(bobj) << "\n";
    cout << "size of derived is : " << sizeof(dobj) << "\n";

    return 0;
}