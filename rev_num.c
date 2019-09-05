#include <stdio.h>
#include<string.h>
int main()
{
    int a,r=0,d=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    while (a != 0)
    {
        r = a%10;
        d = 10*d+r;
        a /= 10;
    }
    printf("%d",d);
    return 0;
}
