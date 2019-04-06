#include "doth.h"

void			ft_reverse_rotate_x(t_lst_p *lst_x)
{
	int			tmp;
	int			tmp_sup;
	t_lst_p		*first;

	first = lst_x;
	tmp = lst_x->data;
	while(lst_x->next)
	{
		tmp_sup = lst_x->next->data;
		lst_x->next->data = tmp;
		tmp = tmp_sup;
		lst_x = lst_x->next;
	}
	first->data = tmp;
}

void			ft_reverse_rotate_lst(char **patern, int i, t_lst *lst)
{
	if (strcmp(patern[i], "rra") == 0)
	{
		if (lst->lst_a)
			ft_reverse_rotate_x(lst->lst_a);
		lst->opt_v == 1 ? ft_print(lst->lst_a, lst->lst_b, patern[i]) : 0;
	}
	if (strcmp(patern[i], "rrb") == 0 && lst->lst_b == NULL)
		printf("rrb = -\n");
	if (strcmp(patern[i], "rrb") == 0 && lst->lst_b != NULL)
	{
		if (lst->lst_b)
			ft_reverse_rotate_x(lst->lst_b);
		lst->opt_v == 1 ? ft_print(lst->lst_a, lst->lst_b, patern[i]) : 0;
	}
	if (strcmp(patern[i], "rrr") == 0)
	{
		if (lst->lst_a)
			ft_reverse_rotate_x(lst->lst_a);
		if (lst->lst_b)
			ft_reverse_rotate_x(lst->lst_b);
		lst->opt_v == 1 ? ft_print(lst->lst_a, lst->lst_b, patern[i]) : 0;
	}
}
