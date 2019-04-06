#include "doth.h"

void		ft_print_patern(char **patern)
{
	int		i;

	i = 0;
	while (patern[i])
	{
		printf("%d - %s\n", i,  patern[i]);
		i++;
	}
}

char		**ft_r_f_push_swap()
{
	char	ret[BUFF_S];
	int		readed;
	char	**patern;

	readed = read(0, ret, BUFF_S);
	if (readed == 50000)
	{
		printf("Error cash memory\n");
		exit (0);
	}
	ret[readed] = '\0';
	patern = ft_strsplit(ret, '\n');
	if (ft_parse_patern(patern) == 0 || ft_strstr(ret, "\n\n") != NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	return (patern);
}
