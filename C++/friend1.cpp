#include<iostream>
using namespace std;

class Demo
{
    public:     int i;
    private:    int j;
    protected:  int k;
    public:
        Demo()
        {
            i = 10; j = 20; k = 30;
        }
};

void Display()
{
    Demo obj;
    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n"; // error : private member not accessible
    cout<<obj.k<<"\n"; // error : protected member not accessible
}

int main()
{
    Display();
    
    return 0;
}