#include <iostream>
using namespace std;

// OVER LOADING FUNCTION

class Demo
{
public:
    void Fun()
    {}
    void Fun(int i)
    {}
    void Fun(int i, int j)
    {}
};

int main()
{
    Demo dobj;
    dobj.Fun();       // Calls Fun()
    dobj.Fun(10);     // Calls Fun(int i)
    dobj.Fun(10, 20); // Calls Fun(int i, int j)

    return 0;
}