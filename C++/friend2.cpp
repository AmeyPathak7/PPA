#include <iostream>
using namespace std;

class demo
{
public:
    int i;

private:
    int j;

protected:
    int k;

public:
    demo()
    {
        i = 10;
        j = 20;
        k = 30;
    }
    friend void display();
    // there is one behaviour
    //  freind is not memeer of class
};

void display()
{
    demo obj;
    cout << obj.i << "\n";
    cout << obj.j << "\n";
    cout << obj.k << "\n";
};

int main()
{
    
    display();

    return 0;
}

// error in private and protected ;
