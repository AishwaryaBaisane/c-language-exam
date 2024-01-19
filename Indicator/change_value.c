//wap to change value by passing address of variable in udf.
#include<stdio.h>
int value(int *a)
{
//	int i;
//	printf("enter incriment");
//	scanf("%d",&i);
	*a = *a + 1;
}
int main()
{
	int a;
	printf("enter a :");
	scanf("%d",&a);
	printf("value is %d\n",a);
	value(&a);
	printf("change value is incriment of 1 : %d");
}