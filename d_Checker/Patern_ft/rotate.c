#include "doth.h"

void			ft_rotate_x(t_lst_p *lst_x)
{
	int tmp;

	tmp = lst_x->data;
	while (lst_x->next)
	{
		lst_x->data = lst_x->next->data;
		lst_x = lst_x->next;
	}
	lst_x->data = tmp;
}

void			ft_rotate_lst(char **patern, int i, t_lst *lst)
{
	if (strcmp(patern[i], "ra") == 0)
	{
		if (lst->lst_a)
			ft_rotate_x(lst->lst_a);
		lst->opt_v == 1 ? ft_print(lst->lst_a, lst->lst_b, patern[i]) : 0;
	}
	if (strcmp(patern[i], "rb") == 0 && lst->lst_b == NULL)
		printf("rb = -\n");
	if (strcmp(patern[i], "rb") == 0 && lst->lst_b != NULL)
	{
		if (lst->lst_b)
			ft_rotate_x(lst->lst_b);
		lst->opt_v == 1 ? ft_print(lst->lst_a, lst->lst_b, patern[i]) : 0;
	}
	if (strcmp(patern[i], "rr") == 0)
	{
		if (lst->lst_a)
			ft_rotate_x(lst->lst_a);
		if (lst->lst_b)
			ft_rotate_x(lst->lst_b);
		lst->opt_v == 1 ? ft_print(lst->lst_a, lst->lst_b, patern[i]) : 0;
	}
}
