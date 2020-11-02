#include<stdio.h>
int main()
{
	int a,b;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("\nNhap b=");
	scanf("%d",&b);
	if(a*b>1000)
	printf("a nhan b lon hon 1000");
	else if(a*b==1000)
	printf("a*b=1000");
	else
	printf("a nhan b nho hon 1000");

	return 0;
