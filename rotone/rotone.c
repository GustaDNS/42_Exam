#include <unistd.h>

int	main(int argc, char **argv)
{
	char *str = argv[1];
	
	if (argc == 2)
	{
		while (*str)
		{
			if ((*str >= 97 && *str < 122) || (*str >= 65 && *str < 90))
				*str += 1;
			else if (*str == 90 || *str == 122)
				*str -= 25;
			write(1, str++, 1);
		}
	}
	write(1, "\n", 1);
}