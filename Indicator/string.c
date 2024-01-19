//program to find length of a string using a pointer
#include<stdio.h>
#include<string.h>
int length(char *a)
{
   int l = strlen(a);

}
int main()
{
	char a[100];
	printf("enter string :");
	gets(a);
	int *ptr = &a;
    printf("length is : %d",length(&a));
	
}