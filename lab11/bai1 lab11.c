#include <stdio.h>
#include <stdlib.h>

void main ()
{
	float s,p,	 a,b,c;
	 a,b,c;
	printf("Dien tich tam giac la \n");
	printf("nhap vao so a :");
	scanf("%f",&a);

	printf("nhap vao so b :");
	scanf("%f",&b);

	printf("nhap vao so c :");
	scanf("%f",&c);

	if((a+b)>c && (a+c)>b && (b+c)>a)
	{
		p=(a+b+c)/2;
		s = sqrt(p*(p-a)*(p-c)*(p-b));
		printf("%.1f",s);
	}
	else

	printf("Khong hop le");


}
