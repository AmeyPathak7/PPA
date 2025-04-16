#include <stdio.h>

int main()
{
    char ch = 'A';
    int no = 11;
    float f = 90.9090f;
    double d = 90.90909;

    void *p = NULL;

    p = &ch;
    printf("%c\n", *(char *)p);

    p = &no;
    printf("%d\n", *(int *)p);
    return 0;
}