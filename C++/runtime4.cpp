#include <iostream>
using namespace std;

// redefining 
class Demo
{
public:
    void Fun()
    {
        cout << "Base fun\n";
    }
};

class Hello : public Demo
{
public:
    void Fun()
    {
        cout << "Derived fun\n";
    }
};

// base kadne yenari copy zakli geli y 
// derived kadne yenari copy disnar ahe


int main()
{
    Hello hobj;

    hobj.Fun(); //

    return 0;
}