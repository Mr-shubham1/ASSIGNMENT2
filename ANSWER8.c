#include<stdio.h>
int main()
{
    int a,b=3;
    printf("enter a number\n");
    scanf("%d",&a);
    if((a&b)%2!=0)
    printf("%d is odd number",a);
    else
    printf("%d is even number",a);
    return 0;
}