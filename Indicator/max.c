//wap to find maximum from array using pointer.
#include<stdio.h>
int main()
{
	int n;
	printf("enter size of array :");
	scanf("%d",&n);
	
	int i,j,temp;
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
	}

    int *max=&a[0];
	for(i=0; i<n; i++)
	{
		 if(a[i]>*max)
			{
			  *max=a[i];
			}	
	    
	}

    
		printf("max value is %d",*max);
		
}