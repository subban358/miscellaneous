#include <stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int i,j,k=0,c=0;
    printf("Enter String: ");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }

    for(j=c-1;j>=0;j--)
    {
        b[k] = a[j];
        k++;
    }
    b[k] = '\0';
    puts(b);
    return 0;
}
