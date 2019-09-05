#include <stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int i,j,k,c=0;
    printf("Enter String 1: ");
    scanf("%s",&a);
    printf("Enter String 2: ");
    scanf("%s",&b);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    a[c] = ' ';
    for(j=0;b[j] !='\0';j++)
    {
        a[c+1] = b[j];
        c++;
    }
    a[c+1] = '\0';
    puts(a);
    return 0;
}
