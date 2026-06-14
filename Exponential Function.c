int asi(int k, int l);

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Base: ");
    scanf("%d",&a);
    printf("and it's Exponent: ");
    scanf("%d",&b);
    printf("%d for %d times is %d",a,b,asi(a,b));
    return 0;
    getchar();
}

int asi(int k, int l)
{
    int j,m=1;
    for(j=0; j<l; j++)
    {
        m*=k;
    }
    return m;
}