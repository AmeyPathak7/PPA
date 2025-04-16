#include <iostream>
using namespace std;

// NO casting

int main()
{
    char ch = 'A';
    int i = 10;
    float f = 10.5f;

    char *cp = &ch;
    int *ip = &i;
    float *fp = &f;

    return 0;
}
