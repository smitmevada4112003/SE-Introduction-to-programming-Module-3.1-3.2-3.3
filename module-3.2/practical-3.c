//WAP to find number is even or odd using ternary operator.

#include<stdio.h>

int main()
{
	int num;
	printf("\nEnter the num = ");
	scanf("%d",&num);
	s(num%2==0) ? printf("\n%d number is even number",num) : printf("\n%d number is odd number",num);
	return 0;
}
