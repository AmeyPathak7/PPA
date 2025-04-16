#include <stdio.h>
int main()
{
    int std = 0;

    printf("please enter your standard : \n");
    scanf("%d", &std);

    switch (std)
    {
    case 1:
        printf("your exam is at 9 AM\n");
        break;
    case 2:
        printf("your exam is at 10 AM\n");
        break;
    case 3:
        printf("your exam is at 11 AM\n");
        break;
    case 4:
        printf("your exam is at 12 PM\n");
        break;
    default:
        printf("worng input\n");
    }
    return 0;
}