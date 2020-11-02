#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("\nNhap b=");
	scanf("%d",&b);
	c=b-a;

	if(c==a)
	printf("c=a");
	else if(c==b)
	printf("c=b");
	else
	printf("c#a#b");

	return 0;
}
