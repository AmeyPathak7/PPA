#include <iostream>
using namespace std;

class Base
{
public:
    int i, j;
    Base()
    {
        cout << "Base constructor\n";
    }
    ~Base()
    {
        cout << "Base desteuctor\n";
    }
};
class Derived : public Base
{
public:
    int k;
    Derived()
    {
        cout << "Deriverd constructor\n";
    }
    ~Derived()
    {
        cout << "Derived desteuctor\n";
    }
};
class DerivedX : public Derived
{
public:
    int k;
    DerivedX()
    {
        cout << "DeriverdX constructor\n";
    }
    ~DerivedX()
    {
        cout << "DerivedX desteuctor\n";
    }
};

int main()
{
    DerivedX dobj;
    cout << "Size of Derivedx : " << sizeof(Base) << "\n";
    cout << "Size of Derivedx : " << sizeof(Derived) << "\n";
    cout << "Size of Derivedx : " << sizeof(DerivedX) << "\n";

    return 0;
}
