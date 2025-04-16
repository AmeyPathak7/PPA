    // local and global varible


#include <stdio.h>

int x = 51; //  memory get allocated in { data } 

void Demo()
{
    int i = 21; // if we dont give value it will generate garbage value so ....
    // we have to always allocate the value for good programming practice

    printf(" Insode Demo value of local i is : %d\n", i); // memory get allocated in { stack } 
    printf(" Insode Demo value of global x is : %d\n", x);
}

void Hello()
{
    int j = 11;
    printf(" Insode Demo value of local i is : %d\n", j);
    printf(" Insode Demo value of global x is : %d\n", x);
    // printf("%d",i); error is created by this
}

int main()
{
    printf("Value of globle x inside main is : %d\n",x);
    Demo();
    Hello();

    return 0;
}

// globle varible is not used in this batch , because we can change it ( its a bad programming practtice )

