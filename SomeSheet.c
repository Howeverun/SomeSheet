#include <unistd.h>
#include <stdio.h>

long int ReturnSqr(int a)
{
	return (a * a);
}

int	main(void)
{
	printf("%ld", ReturnSqr(12));
	printf("%s\n", " - is sqr of 12");
	printf("%s\n", "^|&|^");
}
