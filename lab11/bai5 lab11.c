
#include <stdio.h>
#include <stdlib.h>




#include<stdio.h>
main()
{
	int a, b, choice,so;
	printf("\n\t   TINH TOAN");
	printf("\n\t===============\n");

	printf("\t1. Nhap so. \n\t2. Tinh tong. \n\t3. Tinh hieu. \n\t4. Tinh tich. \n\t5. Tinh thuong. \n\t6.Thoat.\n");
	scanf("%d", &choice);
	int sum(int a, int b) {
		return a+b;
	}

	int sub(int a, int b) {
		return a-b;
	}

	int multi(int a, int b) {
		return a*b;
	}

	double div(int a, int b) {
		return a/b;
	}

	switch(choice)
	{
		case 1: {
			printf("\nNhap so: ");
			scanf("%d",&so);
			break;
		}
		case 2: {
					printf("\nNhap a: ");
					scanf("%d",&a);
					printf("\nNhap b: ");
					scanf("%d",&b);
					printf("%d + %d = %d",a, b, sum(a,b));	
			break;
		}
		case 3: {
					printf("\nNhap a: ");
					scanf("%d",&a);
					printf("\nNhap b: ");
					scanf("%d",&b);
					printf("%d - %d = %d",a, b, sub(a,b));	
			break;
		}
		case 4: {
					printf("\nNhap a: ");
					scanf("%d",&a);
					printf("\nNhap b: ");
					scanf("%d",&b);
					printf("%d * %d = %d",a, b, multi(a,b));	
			break;
		}
		case 5: {
					printf("\nNhap a: ");
					scanf("%d",&a);
					printf("\nNhap b: ");
					scanf("%d",&b);
					if(b == 0)
					{
						printf("\nLoi ket qua.");
					}
					else
						printf("%d / %d = %d",a, b, div(a,b));	
			break;
		}
		case 6: {
			return ;
			break;
		}
	}

}
