#include <unistd.h>
#include <string.h>
#include <stdio.h>

void		ft_generic(void);
void		ft_takes_place(int hour);

int			main(int argc, char** argv)
{
	int i;
	i = 1;
	if (argc == 1)
	{
		printf("Oh behave!!");
		printf("\nWe can try multiple positions, tell me which ones baby!!");
		printf("\nusage: %s 00", argv[0]);
		printf("\nDo it like that and we would be singing, YEAH BABY!\n");
	}
	while (i < argc)
	{
		if (strcmp("00", argv[i]) == 0)
			ft_generic();
		if (strcmp("01", argv[i]) == 0)
		{
			printf("Testing ft_takes_place(-1) to (25)\n");
			int hour = -1;
			while (hour < 26)
				ft_takes_place(hour++);
		}
		i++;
	}
}
