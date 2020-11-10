#include <stdio.h>
void main()
{
	int basic;
	printf("\n Please enter your basic:");
	scanf("%d",&basic);
	switch (basic)
	{
	case 200:
	printf("\nBonus is dollar %d\n", 50);
	break;

	case 300:
	printf("\nBonus is dollar %d\n", 125);
	break;

	case 400:
	printf("\nBonus is dollar %d\n", 140);
	break;

	case 500:
	printf("\nBonus is dollar %d\n", 175);
	break;

	default:
	printf("\nInvalid entry");
	break;
	}

}

