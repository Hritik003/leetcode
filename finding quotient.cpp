
#include<stdio.h>
int divide(int , int );
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",divide(a,b));
    return 0;
}
int divide(int dividend, int divisor)
{
    int quotient =dividend /divisor;
    return quotient;
}
