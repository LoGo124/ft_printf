#include <stdio.h>
#include "inc/ft_printf.h"

int	main(int argc, char **argv)
{
	while (argc > 1)
	{
		printf("Original:\t%i\n", ft_atoi(argv[argc-1]));
		ft_printf("Own:\t\t%i\n", ft_atoi(argv[argc-1]));
		argc--;
	}
	return (0);
}
