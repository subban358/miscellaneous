/*
you give an input as an command line arguments and suppose if input is 50246
form minimum possible number whose first digit can not be 0.
the output will be = 20456
*/

#include<stdio.h>
#include<stdlib.h>
void sort(int a[100],int i){
    int temp=0,m,n;
    for(m=0;m<i-1;m++){
        for(n=0;n<i-m-1;n++){
            if(a[n]>a[n+1]){
                temp=a[n];
                a[n]=a[n+1];
                a[n+1]=temp;
            }
        }
    }
    
}


void main(int argc, char *argv[])
{
    int no,i=0,a[100],b[100],c=0,t=0;

	no=atoi(argv[1]);

    while(no!=0){
        a[i]=no%10;
        no=no/10;
        i++;
    }
	
    sort(a,i);

    for(int l=0;l<i;l++){
        if(a[l]==0)
            c++;

    }
    t=a[0];
	a[0]=a[c];
	a[c]=t;
	for(int s=0;s<i;s++)
		printf("%d",a[s]);
	
	
}
