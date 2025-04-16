#include <stdio.h>
#include<stdlib.h>

int main()
{
    double *p = NULL;
    int size = 0;

    printf("Enter the number of element that you want to allocate : \n");
    scanf("%d", &size);

    p = (double *)malloc(size * sizeof(double));
    if (p == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }
    printf("memory gets allocated successfully\n");

    // use of memory

    free(p);

    return 0;
}


/*
allocate  the memory 
use the memory 
free the memory 
*/