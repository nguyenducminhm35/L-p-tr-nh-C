#include <stdio.h>
main()
{
	int ary[10];
	int sum,avg,max,min,total;
	int i;
	int m=90;
	int n=8,k=8,l=8;
	for(i=0;i<10;i++)
	{
		printf("Nhap gia tri%d:",i+1);
		scanf("%d",&ary[i]);

	}

	max=ary[0];
	min=ary[0];
	for(i=0;i<10;i++)
{

		if(ary[i]>max)
		max=ary[i];
		if(ary[i]<min)
		min=ary[i];
		sum=sum+ary[i];
}
	avg=sum/10;
	printf("\n Max %d %d ",max,m);
	printf("\n Min %d %d %d",min,n,k,l);
	printf("\n sum=%d\n avg=%d",sum,avg);
}
