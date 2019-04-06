#include "doth_swap.h"

int 	ft_double_split(char **av)
{
	int i;
	int j;
	int n;

	n = 0;
	while(av[n])
	{
		i = 0 + n;
		j = i + 1;
		while(av[j])
		{
			if (strcmp(av[i], av[j]) == 0)
				return (0);
			j++;
		}
		n++;
	}
	return (1);
}

static	int	ft_parse_atoi_int(char *av)
{
	if (av[0] == '-')
	{
		if (strcmp(av, "-2147483648") > 0)
			return (0);
	}
	else if (strcmp(av, "2147483647") > 0)
	{
		return (0);
	}
	return (1);
}

int			ft_parse_atoi(char **av)
{
	int i;
	int j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (j == 0 && av[i][j] == '-')
				j++;
			if ((av[i][j] > '9' || av[i][j] < '0') || \
			((j > 9 && av[i][0] != '-') || (j > 10 && av[i][0] == '-')))
				return (0);
			if ((j == 9 && av[i][0] != '-') || (j == 10 && av[i][0] == '-'))
			{
				if (ft_parse_atoi_int(av[i]) == 0)
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
