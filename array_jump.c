#include <stdio.h>
int max(int a,int b){return (a>b)?a:b;}
int res(int a[],int n)
{
    int maxReach,steps,jumps,i;
    maxReach = a[0];
    steps = a[0];
    jumps = 1;
    if(a[0]>=n)
        return 1;
    if(n <= 1)
        return 0;
    if(a[0] == 0)
        return -1;
    for(i=1;i<n;i++)
    {
        if(i == n-1)
            return jumps;
        maxReach = max(maxReach,i+a[i]);
        steps --;

        if (steps == 0)
         {
            jumps++;

            if(i >= maxReach)
                return -1;

            steps = maxReach - i;
         }
    }
    return -1;
}


int main()
{
    int a[100];
    int n,test,ans[10],i;
    scanf("%d",&test);
    for(int h=0;h<test;h++)
    {
        scanf("%d",&n);
        for(int l=0;l<n;l++)
            scanf("%d",&a[l]);
        ans[h] = res(a,n);

    }
    for(i=0;i<test;i++)
        printf("%d\n",ans[i]);
    return 0;
}
