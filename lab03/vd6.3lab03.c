#include <stdio.h>
void main()
{
	 printf("The number 555.55 in various forms:\n");
printf("In float from without modifiers:\n");
     printf("[%f]\n",555.55);
     printf("In expomential from without any modifier:\n");
     printf("[%e]\n",555.55);
     printf("Infloat from with - modifier:\n");
     printf("[%-f]\n",555.55);
     printf("In float from with digit string 10.3 as modifier\n");
     printf("[%10.3f]\n",555.55);
     printf("In float  from with 0 as  modifier:\n");
     printf("[%0f]\n",555.55);
     printf("In float from with 0 and digit string 10.3");
     printf("as modifiers:\n");
     printf("[%010.3f]\n",555.55);
     printf("In float from with -, 0");
     printf("and digit string 10.3 as modifiers:\n");
     printf("[%-010.3f]\n",555.55);
     printf("In exponential from with 0");
     printf("and digit string 10.3 as modifiers:\n");
     printf("[%010.3e]\n",555.55);
     printf("In exponential from with -, 0");
     printf("and digit string 10.3 as modifiers:\n");
     printf("[%-010.3e]\n\n",555.55);
}
