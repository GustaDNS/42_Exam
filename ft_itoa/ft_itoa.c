#include <stdlib.h>

int	module(int nbr)
{
	if (nbr < 0)
		return(-nbr);
	return(nbr);
}

int	len(int nbr)
{
	int len = 0;
	if (nbr < 0)
		++len;
	while (nbr != 0)
	{
		++len;
		nbr /= 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char *value;
	int length = len(nbr);

	value = (char *)malloc(sizeof(char) * (length + 1));
	value[length] = '\0';

	if (nbr < 0)
		value[0] = '-';
	if (nbr  == 0)
		value[0] = '0';
	while (nbr != 0)
	{
		--length;
		value[length] = module (nbr % 10) + '0';
		nbr /= 10;
	}
	return (value);
}