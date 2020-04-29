#include<stdio.h>


int divide(int var1);
int main()
{
    int a, b;

    scanf("%i", &a);
    b=divide(a);
    printf("%i", b);

    return 0;
}

int divide(int var1)
{
    return(var1%2);
}
