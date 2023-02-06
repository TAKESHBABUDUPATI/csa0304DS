#include<stdio.h>
int main()
{
	int n,a=0,b=1,c=0,sum=0;
	printf("enter the elements: \n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
    {
    	printf("%d ",a);
    	c=b;
    	b=a+b;
    	a=c;
    	sum+=a;
    }
    printf("\n the fiboncci series are %d",sum);
}
