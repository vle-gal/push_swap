#include "doth.h"

void	ft_swap_a(t_lst_p *lst_a)
{
	int		tmp;

	if (lst_a->next)
	{
		tmp = lst_a->data;
		lst_a->data = lst_a->next->data;
		lst_a->next->data = tmp;
	}
}

void	ft_swap_b(t_lst_p *lst_b)
{
	int		tmp;

	if (lst_b->next)
	{
		tmp = lst_b->data;
		lst_b->data = lst_b->next->data;
		lst_b->next->data = tmp;
	}
}

void	ft_swap_lst(char **patern, int i, t_lst *lst)
{
	if (ft_strcmp(patern[i], "sa") == 0)
	{
		if (lst->lst_a)
			ft_swap_a(lst->lst_a);
		lst->opt_v == 1 ? ft_print(lst->lst_a, lst->lst_b, patern[i]) : 0;
	}
	if (ft_strcmp(patern[i], "sb") == 0 && lst->lst_b != NULL)
	{
		printf("test\n");
		if (lst->lst_b)
			ft_swap_b(lst->lst_b);
		lst->opt_v == 1 ? ft_print(lst->lst_a, lst->lst_b, patern[i]) : 0;
	}
	if (ft_strcmp(patern[i], "sb") == 0 && lst->lst_b == NULL)
		printf("sb = -\n");
	if (ft_strcmp(patern[i], "ss") == 0)
	{
		if (lst->lst_a)
			ft_swap_a(lst->lst_a);
		if (lst->lst_b)
			ft_swap_b(lst->lst_b);
		lst->opt_v == 1 ? ft_print(lst->lst_a, lst->lst_b, patern[i]) : 0;
	}
}
