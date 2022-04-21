
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int nb = 9;
	while (nb * 4 != 112)
		nb--;
	printf("nb : %d\n", nb);
	printf("nb * 4 : %d\n", nb * 4);
	return (0);
}