#include <iostream>
using namespace std;

class Demo
{
public:
    int i,j,k;

};
class Hello : public Demo
{
    public:
    int x,y;
};

int main()
{
    Demo *dp = new Demo;    // up-casting
    Hello *hp = new Hello;  // down-casting

    return 0;
}

/*
lahan capacity -> up casting
mothi capacity -> down casting

*/