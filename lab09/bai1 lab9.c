#include<stdio.h>
main()
{
int arr[10];
int i;
for(i=0;i<10;i++)
{

	printf("Nhap mang[%d]:",i);
	scanf("%d",&arr[i]);
}
for(i=0;i<10;i+=2)
{
	printf("arr[%d]",i);
}
	
}

