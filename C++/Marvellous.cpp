#include <iostream>

using namespace std;

class Demo
{
public:
    int x;
    int y;

    // defult constructor   -   copy  consturctor  -  parametarise consturctor
    Demo() // constructor .... is used to allocate the resource
    {
        cout << "Inside constractor\n";
    }
    ~Demo() // desteuctor  ..........is used to de-allocate the resource ........ ~ tillda operator
    {
        cout << "Inside desteuctor\n";
    }
};
int main() // main function .....
{
    cout << "Inside main\n";

    Demo obj; // memory allocation


    obj.x = 11;
    obj.y = 21;

    cout<<obj.x<<"\n";
    cout<<obj.y<<"\n";
    cout << "Inside object\n";

    return 0;
}

/*
 ( ! / ~ ) this are 'Not' operator
 ! logiacl not
 ~ bitwise not

 obj storage class ?
it is local -> auto ....



*/