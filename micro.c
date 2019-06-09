/*
Given a number n, print following pattern without using any loop.

Examples :

Input: n = 16
Output: 16, 11, 6, 1, -4, 1, 6, 11, 16

Input: n = 10
Output: 10, 5, 0, 5, 10
We basically first reduce 5 one by one until we reach a negative or 0. After we reach 0 or negative, we one add 5 until we reach n.
*/

#include<stdio.h>
void main()
{
    int n,a;
    printf("Enter value: ");
    scanf("%d",&n);
    a=n;
    run(n,a);
}
void run(int n,int a)
{
    static int flag=0;

    if(n<=0)
        flag=1;
    if(flag==1&&n==a)
    printf("%d ",n);
    else
    printf("%d, ",n);

    if(n<=a&&n>0&&flag==0)
        run(n-5,a);
    else if(flag==1 && n<a)
        run(n+5,a);

}
