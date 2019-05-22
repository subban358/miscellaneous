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
    printf("%d, ",n);

    if(n<=a&&n>0&&flag==0)
        run(n-5,a);
    else if(flag==1 && n<a)
        run(n+5,a);

}
