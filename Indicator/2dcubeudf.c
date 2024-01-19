#include<stdio.h>
void cube(int *ptr,int n)
{
	printf("cube is :");
	for(int i=0; i<n*n; i++)
	{
		int x=*ptr++;
		printf("%d ",x*x*x);
	
	}
	
}
int main()
{
	int n;
	printf("enter n :");
	scanf("%d",&n);
	int a[n][n];
	int i,j;

    for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
		  printf("enter array a[%d][%d]",i,j);
		  scanf("%d",&a[i][j]);
	      
		}
		
   }
	int *ptr = &a[0][0];
	cube(ptr,2);
	
}