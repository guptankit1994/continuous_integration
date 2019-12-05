#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n;
	char* arr;
	arr =(char*)malloc(n*sizeof(char));
	printf("Enter lenght of string you want\n");
	scanf("%d",&n);
	printf("Enter the string\n");
	scanf("  %[^\n]s",arr);
	printf("String you enter is: %s\n",arr);
	return 0;
}
	

	
