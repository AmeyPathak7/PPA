#include <iostream>
using namespace std;


// Redefination 

class Demo
{
public:
    void Fun(int i)
    {
        cout << "Base fun\n";
    }
};

class Hello : public Demo
{
public:
    void Fun(int i, int j)
    {
        cout << "Derived fun\n";
    }
};


int main()
{
    Hello hobj;

    hobj.Demo::Fun(11);
    
    hobj.Fun(11,21); 

    return 0;
}

// varcha fun zakla gelya mule errror yeanr ahe 

// jr varcha access karacha asel tr 
// demo cha fun asa sangav lagta 