// error 3/4/25


#include <iostream>
#include <string.h>

using namespace std;

int strlen(char Brr[])
{
    int iCnt = 0;
    while(*Brr != '\0')
    {
        iCnt++;
        Brr++;

    }
    return iCnt;
};
int main()
{

    char Crr[] = "Hello";
    int ret = 0;
    strlen(Crr);


    return 0;
};
