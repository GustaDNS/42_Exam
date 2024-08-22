#include <unistd.h>

int	main(int argc, char **argv)
{
	char *str = argv[1];
	int i = 0;
	

	if (argc == 2)
	{
		while (str[i] != '\0')
			i++;
		while(i >= 1)
		{
			write(1, &str[i - 1], 1);
			i--;
		}
	}
	write (1, "\n", 1);
}