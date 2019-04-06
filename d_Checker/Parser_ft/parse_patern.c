#include "doth.h"

int		ft_parse_patern(char **patern)
{
	int i;

	i = 0;
	while (patern[i])
	{
		if (strcmp(patern[i], "sa") != 0 && strcmp(patern[i], "sb") != 0 && \
		strcmp(patern[i], "ss") != 0 && strcmp(patern[i], "pa") != 0 && \
		strcmp(patern[i], "pb") != 0 && strcmp(patern[i], "ra") != 0 && \
		strcmp(patern[i], "rb") != 0 && strcmp(patern[i], "rr") != 0 && \
		strcmp(patern[i], "rra") != 0 && strcmp(patern[i], "rrb") != 0 && \
		strcmp(patern[i], "rrr") != 0)
			return (0);
		i++;
	}
	return (1);
}
