#include <stdio.h>
main()
{
	incre();
	incre();
	incre();
}

incre()
{
	static char var = 65; /* var is static variable */
	printf("\nThe charactercstored in var is %c", var++);
}
