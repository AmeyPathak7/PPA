// local and global varible

#include <stdio.h>

void Demo()
{
    int i; 
    int j = 11;
    printf("value of i : %d\n", i); // generates garbage value ( memory management policy )
    printf("value of j : %d\n", j);
}

int main()
{
    Demo();

    return 0;
}
