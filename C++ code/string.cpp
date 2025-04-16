#include<iostream>
using namespace std;
int main()
{
    char Arr[] = {'H','E','L','L','O','\0'};

    char Brr[6] = {'H','E','L','L','O','\0'};

    char Crr[] = "Hello";

    printf("%s\n",Arr);
    
    printf("%s\n",Brr);
    
    printf("%s\n",Crr);

    return 0;

};

// \0 shows whrer te stop the execution ...
