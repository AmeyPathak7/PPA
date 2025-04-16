#include <iostream>
using namespace std;

class Arithematic
{
public:
    int No1;
    int No2;

    Arithematic() // defult constructor                                                          Polymorphism 
    {                                                                               
        cout << "Inside defult constructor\n";
        No1 = 0;
        No2 = 0;
    }
    Arithematic(int A, int B) // parametarise consturctor
    {
        cout << "Inside Parametised constructor\n";
        No1 = A;
        No2 = B;
    }
    ~Arithematic()
    {
        cout << "Inside  distructor\n";
    }
};

int main()
{

    Arithematic obj1;
    Arithematic obj2(11,10);
      
    return 0;
}






















