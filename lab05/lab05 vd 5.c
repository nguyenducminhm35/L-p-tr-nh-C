#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Nhap a=");
	scanf("%f",&a);
	printf("Nhap b=");
	scanf("%f",&b);
	printf("Nhap c=");
	scanf("%f",&c);

	if(a>=b&&a>=c)
	printf("\nso lon nhat la %f",a);
	else if(b>=a&&b>=c)
	printf("\nso lon nhat la %f",b);
	else
	printf("\nso lon nhat la %f",c);
}
