// 16.4.25
// This program demonstrates the use of constant functions in C++.
#include <iostream>
using namespace std;

class demo
{
public:
    int i, j;

    demo(int a = 0, int b = 0)
    {
        i = a;
        j = b;
    }
    void fun()
    {
        this->i++;
        this->j++;
    }
    void gun() const
    {
        //this -> i++;          NA
        //this -> j++;          NA
    }
};
int main()
{
    demo obj1(10, 20);       // i = 10 / j = 20
    const demo obj2(30, 40); // i = 30 / j = 40

    obj1.fun();     // A
    obj1.gun();     // A
    obj2.fun();     // E
    obj2.gun();     // A   

    return 0;
}