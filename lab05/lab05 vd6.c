#include<stdio.h>
int main()
{
	int x,y;
	printf("Nhap x=");
	scanf("%d",&x);
	printf("\nNhap y=");
	scanf("%d",&y);

	if(x>3000||x<2000)
	printf("\nx=%d",x);
	if(y>=100&&y<=500)
	printf("\ny=%d",y);
	return 0;
}
