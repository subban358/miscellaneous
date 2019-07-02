/*
Given an array of integers, and an integer  ‘K’ , find the count of pairs of elements in the array whose sum is equal to 'K'.

Input:
First line of the input contains an integer T, denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. 
First line of each test case contains 2 space separated integers N and K denoting the size of array and the sum respectively. 
Second line of each test case contains N space separated integers denoting the elements of the array.

Output:
Print the count of pairs of elements in the array whose sum is equal to the K.

Constraints:
1<=T<=50
1<=N<=50
1<=K<=50
1<=A[i]<=100

Example:

Input

2
4 6
1  5  7 1
4 2
1 1 1 1

Output

2
6

*/

#include <stdio.h>
int main()
{
    int test_case,size,target;
    int a[100],b[100];

    scanf("%d",&test_case);
    for(int x=0;x<test_case;x++)
    {   scanf("%d %d",&size,&target);
        for(int s=0;s<size;s++)
            scanf("%d",&a[s]);
        b[x]=res(a,size,target);    
    }
    
    for(int y=0;y<test_case;y++)
        printf("%d\n",b[y]);
    return 0;
    
}

int res(int a[],int size,int k)    
{
    int i,j,c=0,sum=0;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(i<j)
            {
                sum=a[i]+a[j];
                if(sum==k)
                   c++;
            }
        }
    }
    return c;
}    
    

  
