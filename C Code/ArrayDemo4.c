#include <stdio.h>
int main()
{
    int arr[4] = {10, 20, 30, 40};
    int brr[] = {10, 20, 30, 40};

    int crr[4];
    crr[0] = 10;
    crr[1] = 20;
    crr[2] = 30;
    crr[3] = 40;

    int drr[6] = {10, 20, 30, 40};

    printf("%d\n", arr[0]);
    printf("%d\n", brr[0]);
    printf("%d\n", crr[0]);
    printf("%d\n", drr[0]);

    printf("%d\n", drr[4]);
    printf("%d\n", drr[5]);

    drr[4] = 50;
    drr[5] = 60;

    printf("%d\n", drr[4]);
    printf("%d\n", drr[5]);

    return 0;
}