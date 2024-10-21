#include "libftprintf.h"

int	ft_putstr(char *str)
{
	int	i;
	while (*str)
	{
		write (1,&(*str),1);
		str++;
		i++;
	}
	return (i);
}

int	main(void)
{
	ft_putstr("hola test");
	return (0);
}