//2d array find cube
#include<stdio.h>
#include<string.h>
int n;
int cube(int **ptr,int n)
{
	int a[n][n];
   a[n][n];
	int i,j;

   
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
        {
         	  int *ptr=&a[i][j];
	       *ptr = *ptr * *ptr * *ptr;
               printf(" %d ",*ptr);	
       }
	  	
	}
}

int main()
{
	int n;
	printf("enter size of array : ");
	scanf("%d",&n);
    int i,j;
    int a[n][n];
   	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
		 printf("enter array a[%d][%d]",i,j);
		 scanf("%d",&a[i][j]);
		}
		
   }
     int *ptr =&a[n][n];
	cube(&ptr,n);
}