#include "doth.h"

void			ft_use_patern(char **patern, t_lst *lst)
{
	int		i;

	i = 0;
	while (patern[i])
	{
		ft_swap_lst(patern, i, lst);
		ft_push_lst(patern, i, lst);
		ft_rotate_lst(patern, i, lst);
		ft_reverse_rotate_lst(patern, i, lst);
		i++;
	}
}

void			ft_correction(t_lst *lst)
{
	int ok;

	ok = 1;

	if (lst->lst_a != NULL)
	{
		while(lst->lst_a->next)
		{
			if (lst->lst_a->data > lst->lst_a->next->data)
			{
				ok = 0;
				break;
			}
			lst->lst_a = lst->lst_a->next;
		}
	}
	if (!lst->lst_b && ok == 1)
		printf("OK\n");
	else
		printf("KO\n");
}

int				main(int ac, char **av)
{
	t_lst	*lst;
	char	**patern;

	if (ac < 2)
		return (0);
	if (!(lst = malloc(sizeof(t_lst))))
	{
		printf("Error malloc");
		return (0);
	}
	lst->lst_a = NULL;
	lst->lst_b = NULL;
	if (ft_main_lst_a(av, lst) == 0 || ft_double_split(av) == 0)
	{
		printf("Error\n");
		return (0);
	}
	patern = ft_r_f_push_swap();
	if (patern == NULL)
		return (0);
	ft_print_patern(patern);
	printf("-------DEBUT-------\n");
	ft_use_patern(patern, lst);
	ft_correction(lst);

	return (0);
}
