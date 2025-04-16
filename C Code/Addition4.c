#include<stdio.h>
int addition(int a , int b)
{
    int add = 0;
    add = a + b;
    return add;

}
int main()
{
    int no1 = 0, no2 = 0, ans = 0;
    printf("enter first number : \n");
    scanf("%d",&no1);

    printf("entre second number : \n");
    scanf("%d",&no2);

    ans = addition(no1,no2);
    printf("addition is : %d\n",ans);
    return 0;
    
    
}