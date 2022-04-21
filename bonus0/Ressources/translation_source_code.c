
#include <string.h>

void p(char *dest, char *s)
{
	char *var;
	char *buffer;

	puts(s);
	read(0, var, 0x1000);
	*strchr(var, '\n') = 0;
	strncpy(dest, var, 20);
}

void	pp(char *dest)
{
	char *s1;
	char *s2;
	size_t i;

	p(s1, " - ");
	p(s2, " - ");
	strcpy(dest, s1);
	while (s1[i])
		i++;
	*(dest + i) = " ";
	strcat(dest, s2);
}

int	main(void)
{
	char dest[54];

	pp(dest);
	puts(dest);
	return (0);
}