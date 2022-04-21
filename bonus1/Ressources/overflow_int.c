
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int nb = 9;
	while (nb * 4 != 44) //The buff is 40 lenth and an int is 4
		nb--;
	printf("nb : %d\n", nb);
	printf("nb * 4 : %d\n", nb * 4);
	return (0);
}