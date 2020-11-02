#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Welcome to VN Bank");
	printf("\nNhap ma the:");
	scanf("%d",&a);
	printf("\nNhap ma pin:");
	scanf("%d",&b);

	int balance,num,x,y;

	balance=20000000;
	y=100000;
	char ans='Y';

	if(a==1&&b==2)
	{

		printf("Vui long chon dich vu(1-4)\n\t");
		printf("1.Rut tien.\n\t");
		printf("2.Chuyen khoan.\n\t");
		printf("3.Kiem tra tai khoan.\n\t");
		printf("4.Thoat.\n");
		scanf("%d",&c);

		if(c==1)
		{
			printf("So tien trong the hien co=%d",balance);
			printf("\nPhi rut tien:%d",y);
			printf("\nNhap so tien can rut:");
			scanf("%d",&num);
			if(num%50000==0&&num<=balance-y&&num<=5000000)
			{
				printf("\nBan co muon rut tien khong Y or N:");
				fflush(stdin);
				scanf("%c",&ans);
				if(ans=='Y')
				{	
					x=balance-num-y;
					printf("\nDa rut thanh cong:%d",num);
					printf("\nSo tien con lai trong the %d",x);
					printf("\nHen gap lai quy khach lan sau");
				}
				else
				{
					printf("Hen quy khach lan sau");
				}
			}
			else
			{
			printf("Khong dap ung yeu cau\nKhong the rut tien\nHen quy khach lan sau");
			}
		}
		else if(c==2)
		{
			printf("So tien trong the hien co=%d",balance);
			printf("\nPhi chuyen tien:%d",y);
			printf("\nNhap so tien can chuyen:");
			scanf("%d",&num);
			if(num%50000==0&&num<=balance-y&&num<=100000000)
			{
				printf("\nBan co muon chuyen tien khong Y or N:");
				fflush(stdin);
				scanf("%c",&ans);
				if(ans=='Y')
				{	
					x=balance-num-y;
					printf("\nDa chuyen thanh cong:%d",num);
					printf("\nSo tien con lai trong the %d",x);
					printf("\nHen gap lai quy khach lan sau");
				}
				else
				{
					printf("Hen quy khach lan sau");
				}
			}
			else
			{
				printf("Khong dap ung yeu cau\nKhong the rut tien\nHen quy khach lan sau");
			}
		}
		else if(c==3)
		{
			printf("So tien trong tai khoan hien co:%d",balance);
		}
		else
		{
			printf("Hen gap lai quy khach lan sau.");
		}
	}
	else
	{
		printf("Sai ma\nVui long nhap lai.");
	}
}
