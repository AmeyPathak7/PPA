

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char Arr[] = "hello";

    char *ptr = Arr;

    printf("%c\n", *ptr);
    ptr++;
    printf("%c\n", *ptr);
    return 0;
}

/*
ptr = 100;
&ptr = 200
*ptr = H
&(*ptr) = 100



*/