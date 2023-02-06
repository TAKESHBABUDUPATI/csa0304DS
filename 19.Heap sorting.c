#include <stdio.h>
int main()
{
      int a[50],i,n,c,root,t,j;
      printf("Enter total number of elements:");
      scanf("%d", &n);
      printf("Enter the elements:\n");
      for(i = 0; i < n; i++)
          	scanf("%d", &a[i]);	
	  j=n;	  
	  while(j>0)
	  {
      	   for(i=1;i<j;i++)
	   {
	   		c=i;
			do
			{
				root=(c-1)/2;
				if(a[root] < a[c])
				{
					t=a[root];
					a[root]= a[c];
					a[c]=t;
				}
				c=root;
			}while(c!=0);
	   }	 
	 	printf("The MAX - Heap array:\n");
	 	for(i = 0;i < j; i++)
	 		printf("%d\t", a[i]);		
		t=a[0];
		a[0]=a[j-1];
		a[j-1]=t;
		j--;
	}	  
      printf("\nAfter Heap sort:\n");
      for(i = 0;i < n; i++)
	 		printf("%d\t", a[i]);
}
