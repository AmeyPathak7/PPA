#include <iostream>
using namespace std;

// NO casting

int main()
{
    char ch = 'A';
    int i = 10;

    // char *cp = &ch;
    // int *ip = &i;

    char *cp = (char *)&ch; // up-casting
    int *ip = (int *)&i;    // down-casting

    return 0;
}
