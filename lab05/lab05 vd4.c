#include<stdio.h>
int main()
{
	char a;
	printf("Nhap loai nhan vien:");
	scanf("%c",&a);
	if(a=='A')
	printf("Muc luong:300");
	else if(a=='B')
	printf("Muc luong:250");
	else
	printf("Muc luong:100");

	return 0;
}
