#include <iostream>
using namespace std;

class Demo
{
public:
    int i, j;

};
class Hello
{
    int x,y;
};

int main()
{
    Demo *dp = new Demo;  // nocasting
    Hello *hp = new Hello; // mo casting

    return 0;
}
