#include <iostream>
using namespace std;

// Defination 

class Demo
{
public:
    void Fun()
    {
    }
    void Gun(int i)
    {
    }
};

int main()
{
    Demo dobj;
    dobj.Fun();   // Calls Fun()
    dobj.Gun(10); // Calls Gun(int i)

    return 0;
}