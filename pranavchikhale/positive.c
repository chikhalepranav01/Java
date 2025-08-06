#include<stdio.h>
int main() 
 int n;
{
 printf("Enter the number");
 scanf("%d",&n);

 if (n > 0)
	{
		printf("number is positive");
	}
else if(n < 0)
{
	printf("number is negative");
}
else
{
	printf("number is not found");
}
return 0;
}
