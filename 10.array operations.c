#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,A[100],pos;
	printf(" enter the elements: \n");
	scanf("%d",&n);
printf(" enter the elements in array A: \n");
	for(i=0;i<n;i++)
    	scanf("%d",& A[i]);
    
    
    	for(i=n;i>=pos;i--)
    	{
    		A[i]=A[i-1];
		}
    A[pos]=100;	

	
	for(i=0;i<=n;i++)
	printf("%d\t",A[i]);
	
	return 0;	
}
