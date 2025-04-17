#include <iostream>
using namespace std;

class demo; // Forward declaration

class hello
{
public:
    void display();
};

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

    friend void hello::display();
};

void hello::display()
{
    demo obj;
    cout << obj.i << "\n"; // Public member - Accessible
    cout << obj.j << "\n"; // Private member - Accessible due to friend function
    cout << obj.k << "\n"; // Protected member - Accessible due to friend function
}

int main()
{
    hello hobj;
    hobj.display(); // Correct function call

    return 0;
}
