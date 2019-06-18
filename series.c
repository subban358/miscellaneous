/*
Write a program that takes the N value and computes the Nth term of the series 1,1,3,4,9,16,27,64...

Public test case:

Sample input: 8

Sample output: 64
*/

#include <stdio.h>
#include<math.h>
int main()
{
    int i,j=0,s=0,m=0,k=0;
    int n=6;
    int a[n];
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            a[i]=pow(3,s);
            s++;
        }
        else 
        {
            a[i]=pow(4,m);
            m++;
        }
    }
    printf("%d",a[n]);
    return 0;
}
