#include <iostream>
using namespace std;

class Demo
{
public:
    // characteristics
    int no;
    float f;
    double d;
};

int main()
{
    Demo obj;
    obj.no = 11;
    obj.f = 30.30f;
    obj.d = 60.6006060;

    cout << sizeof(obj) << "\n";
    cout << obj.no << "\n";
    cout << obj.f << "\n";
    cout << obj.d << "\n";

    return 0;
}

// abstraction defult ( private is charactristics )