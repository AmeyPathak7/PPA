// 2/4/25

#include <iostream>
using namespace std;

class demo
{
public:
    int i;
    char ch;
    float f;
    double d;
    // allocate as per longest member ( its double  = 8 bytes ) hence we can get 8*n number
};

int main()
{
    demo obj;
    cout << "Size of demo is : " << sizeof(obj) << "\n";

    return 0;
}