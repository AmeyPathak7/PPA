// 16.4.25


#include <iostream>
using namespace std;

class demo
{
public:
    int i, j;
    demo(int a, int b)
    {
        i = a, j = b;
    }
    void display(int x) // void dispaly(demo *this, int x)
    {
        cout << "value of i " << this->i << "\n";
        cout << "value of j " << this->j << "\n";
    }
};
int main()
{
    demo obj(11, 12);

    obj.display(51); // void display(&obj, 51)

    return 0;
}

// only for non static function