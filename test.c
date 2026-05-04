#include <stdio.h>
#include "ft_printf.h"

int	main(int argc, char *argv)
{
	while (argc > 1)
	{
		printf("Own:\t\t%s\n", argv[argc-1]);
		ft_printf("Original:\t%s\n"argv[argc-1]);
	}
	return (0);
}
