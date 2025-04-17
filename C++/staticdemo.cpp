//15.4.25
//system desiger 

#include <iostream>
using namespace std;

class demo
{
public:
    int i, j, k;
    static int x;

    demo()
    {
        i = 10;
        j = 20;
        k = 30;
    }
    void display()
    {
        cout << "Inside display \n";
        cout << i << "\t" << j << "\t" << k << "\n";
    }
    static void help()
    {
        cout << "Inside Help\n";
    }
};

int demo ::x = 50; // x is a variable of class demo initialive with integer value 50

int main()
{
    demo ::help();
    cout << "value of x :" << demo ::x << "\n";

    demo obj1, obj2;
    obj1.display();
    obj2.display();

    cout << "value of i in obj1 is : " << obj1.i << "\n";
    cout << "value of j in obj2 is : " << obj2.j << "\n";

    obj1.help(); // Internally works as -->  demo :: help()
    cout << "Value of static x : " << obj1.x << "\n";

    return 0;
}