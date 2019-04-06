#include "doth.h"


t_lst_p	*ft_lstADD_int_before(int nb, t_lst_p *x_lst)
{
	t_lst_p	*new_lst;

	if (!(new_lst = malloc(sizeof(t_lst))))
	{
		printf("Error malloc");
		exit (0);
	}
	new_lst->next = x_lst;
	new_lst->data = nb;

	return (new_lst);
}

void	ft_push_a(t_lst *lst)
{
	int tmp;
	t_lst_p	*first;

	first = lst->lst_b;
	if (lst->lst_b)
	{
		tmp = lst->lst_b->data;
		lst->lst_b = lst->lst_b->next;
		free(first);
		lst->lst_a = ft_lstADD_int_before(tmp, lst->lst_a);
	}
}

void	ft_push_b(t_lst *lst)
{
	int tmp;
	t_lst_p	*first;

	first = lst->lst_a;
	if (lst->lst_a)
	{
		tmp = lst->lst_a->data;
		lst->lst_a = lst->lst_a->next;
		free(first);
		lst->lst_b = ft_lstADD_int_before(tmp, lst->lst_b);
	}
}


void			ft_push_lst(char **patern, int i, t_lst *lst)
{
	if (ft_strcmp(patern[i], "pa") == 0 && lst->lst_b == NULL)
		printf("pa = -\n");
	if (ft_strcmp(patern[i], "pa") == 0 && lst->lst_b != NULL)
	{
		ft_push_a(lst);
		lst->opt_v == 1 ? ft_print(lst->lst_a, lst->lst_b, patern[i]) : 0;
	}
	if (ft_strcmp(patern[i], "pb") == 0 && lst->lst_a == NULL)
		printf("pb = -\n");
	if (ft_strcmp(patern[i], "pb") == 0 && lst->lst_a != NULL)
	{
		ft_push_b(lst);
		lst->opt_v == 1 ? ft_print(lst->lst_a, lst->lst_b, patern[i]) : 0;
	}
}
