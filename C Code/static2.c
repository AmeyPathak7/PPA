// static storage class

#include <stdio.h>

void Display()
{
    static int i = 11; // continue this value and make it 11 -> 12 -> 13 ( keep it as it is ( if we want to preserve across the program))
    
    i++;
    printf("Value of i is : %d\n", i);
}
int main()
{
    Display();
    Display();
    Display();

    return 0;
}

/*


*/