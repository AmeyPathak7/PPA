#include <stdio.h>
#include <stdlib.h>

struct Demo

{
    int no;
    float f;
};

int main()
{
    int count = 0;

    struct Demo obj;

    struct Demo *p = NULL;

    p = (struct Demo *)malloc(1 * sizeof(struct Demo)); // dynamic

    if (p == NULL)
    {
        printf("Unabele to allocate the memory\n");
        return -1;
    }
    printf("succesfully memory gets allocated");

    //obj.no = 11;
    // p->no = 11;

    free(p);
    return 0;
}
