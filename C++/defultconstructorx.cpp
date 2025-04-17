
// 16.4.25

#include <iostream>
using namespace std;

    class Demo
{
public:
    int i, j;
   
    Demo(int a = 0, int b = 0) // Default constructor with default arguments
    {
        i = a, j = b;
    }
};
int main()
{
    Demo obj1;
    Demo obj2(11);
    Demo obj3(11, 21);

    return 0;
}