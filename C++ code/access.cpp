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

};

int main()
{
   marvellous obj;

    cout << "size of marvellous class :"<< sizeof(obj)<<"\n";
    return 0;
}