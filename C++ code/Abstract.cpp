#include <iostream>
using namespace std;

class Base
{
public:
    int i, j;

    int Addition(int no1, int no2)
    {
        return no1 + no2;
    }

    virtual int Subtraction(int no1, int no2) = 0;
};

class Derived : public Base
{
public:
    int x, y;


    int Subtraction(int no1, int no2) override
    {
        return no1 - no2;
    }

    int Multiplication(int no1, int no2)
    {
        return no1 * no2;
    }
};

int main()
{
    Base *dp = nullptr;
    Derived dobj;

    dp = &dobj;


    cout << "Addition: " << dp->Addition(10, 11) << "\n";
    cout << "Subtraction: " << dp->Subtraction(10, 11) << "\n";
    cout << "Multiplication: " << dobj.Multiplication(10, 11) << "\n";

    return 0;
}
