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
};

int main()
{
    marvellous obj;

    cout << "size of marvellous class :" << sizeof(obj) << "\n";

    cout << obj.i << "\n";
    cout << obj.j << "\n";              // error : private constsructor
    cout << obj.k << "\n";              // error : protectede constructor

    return 0;
}