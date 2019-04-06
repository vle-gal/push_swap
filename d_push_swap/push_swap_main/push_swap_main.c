#include "doth_swap.h"

int		begin_patern(t_lst *lst)
{
	t_lst_p *a;
	int		tmp;

	a = lst->lst_a;
	if (a->data > a->next->data)
	{
		tmp = a->data;
		a->data = a->next->data;
		a->next->data = tmp;
	}
	ft_print(a, lst->lst_b, "sa");
	return (1);
}

int		main(int ac, char **av)
{
	t_lst	*lst;

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
	begin_patern(lst);
}
