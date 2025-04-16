// storage registor

// register

#include <stdio.h>
void Display()
{
    auto int i = 11;            // auto storage class
    register int j = 21;        // register storage class

    printf("Value of i is : %d\n", i);
    printf("Value of j is : %d\n", j);
}
int main()
{
    Display();
    return 0;
}

// registor storage class is a ' request ' ( to direct microprocessor - empty CPU registor);

// *************  globle varible la registor karu naye, *************
 
// dont use short / long in registor  



