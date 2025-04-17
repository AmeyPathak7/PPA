#include <iostream>
using namespace std;

class Demo
{
public:
    int i, j;

};
class Hello
{
    int x,y;
};

int main()
{
    cout<<"size of demo is : "<<sizeof(Demo)<<"\n"; 
    cout<<"size of hello is : "<<sizeof(Hello)<<"\n";

    return 0;
}
