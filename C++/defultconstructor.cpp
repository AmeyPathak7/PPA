// 16.4.25

#include <iostream>
using namespace std;

    class Demo()
{
public:
    int i, j;
    Demo()
    {
        int i = 0, j = 0;
    }
    Demo(int a)
    {
        i = a, j = 0;
    }
    Demo(int a, int b)
    {
        i = a, j = b;
    }
};
int main()
{
    Demo obj1;
    Demo obj2(11);
    Demo obj3(11,21);

    return 0;
}