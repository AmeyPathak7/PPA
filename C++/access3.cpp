// 2/4/25
// Inheritance

#include <iostream>
using namespace std;

class marvellous
{
public:
    int i;

private:
    int j;

protected:
    int k;

public:
    marvellous() // defult constructor
    {
        i = 10;
        j = 20;
        k = 30;
    }
    void display()
    {
        cout << " value of i :" << i << "\n"; //
        cout << " value of j :" << j << "\n"; //
        cout << " value of k :" << k << "\n"; //
    }
};

int main()
{
    marvellous mobj;

    // cout << "size of marvellous class :" << sizeof(obj) << "\n";
    mobj.display();

    return 0;
}