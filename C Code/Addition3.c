#include<stdio.h>
int addition(int a , int b)
{
    int add = 0;
    add = a + b;
    return add;

}
int main()
{
    int no1 = 10, no2 = 20 , ans = 0;
    ans = addition(no1,no2);
    printf("Addition is : %d\n",ans);
    return 0;
}