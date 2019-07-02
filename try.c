#include <stdio.h>

int main()
{
    int a[5]={1,2,3,2,1};
    int n=0,i,j,k,flag;
    int b[10];
    b[0]=a[0];

    for(i=1;i<5;i++)
    {
        flag=0;
        for(j=0;j<=n;j++)
        {
            if(a[i]==b[j])
            {
                flag+=1;
                break;
            }
        }
        if(flag==0)
        {
            n++;
            b[j]=a[i];

        }
    }
    for(k=0;k<=n;k++)
    {
        printf("%d ",b[k]);
    }

    return 0;
}
