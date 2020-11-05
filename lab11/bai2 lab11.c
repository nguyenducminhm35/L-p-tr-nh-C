
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
int check(int num);
main()
{
	int num;

	printf("\nNhap :");
	scanf("%d",&num);
	check(num);
	int num1,num2;

	printf("Nhap num1:\n");
	scanf("%d",&num1);

	printf("Nhap num2:\n");
	scanf("%d",&num2);

	for(num=num1;num<=num2;num++)
	{
		if(num%50==0)
		{
			printf("%d\t",num);
		}
	}
}
int check(int num)

{

	if(num%50==0)
	{
		printf("\nSo nguyen chia het cho 50 %d",num);
		return(0);
	}
	else
	printf("So nguyen ko chia het cho 50 ");
	return(1);
}

