#include <iostream>
using namespace std;

// Defination 

class Demo
{
public:
    void Fun()
    {
    }
};

class Hello : public Demo
{
public:
    void Gun()
    {
    }
};

int main()
{
    Hello hobj;
  
    hobj .Fun(); // Calls Fun()
    hobj .Gun(); // Calls Gun()

    return 0;
}