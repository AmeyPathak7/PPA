#include <iostream>
using namespace std;

class Demo
{
public:
    int i, j;
    void Fun()
    {
        cout << "Base Fun\n";
    }
};
class Hello : public Demo
{
public:
    int x, y;
    void Fun()
    {
        cout << "Derived Fun\n";
    }
};

int main()
{

    cout << sizeof(Demo) << "\n";
    cout << sizeof(Hello) << "\n";

    Demo *dp = new Hello;
    dp->Fun();

    return 0;
}

// Base fun