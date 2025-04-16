/*
1 : 9 AM
2 : 10 AM
3 : 11 AM
4 : 12 PM
*/

#include <stdio.h>
int main()
{
    int std = 0;
    printf("Enter your standard : \n");
    scanf("%d", &std);

    if (std == 1)
    {
        printf("Your exam is at 9 AM\n");
    }
    else if (std == 2)
    {
        printf("Your exam is at 10 AM\n");
    }
    else if (std == 3)
    {
        printf("Your exam is at 11 AM\n");
    }
    else if (std == 4)
    {
        printf("Your exam is at 12 AM\n");
    }
    else
    {
        printf("Wrong input\n");
    }
    return 0;
}