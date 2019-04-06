#include "doth.h"

void	ft_print(t_lst_p *lst_a, t_lst_p *lst_b, char *patern)
{
	printf("%s = ", patern);
	printf("a : ");
	while (lst_a)
	{
		printf("%d ", lst_a->data);
		lst_a = lst_a->next;
	}
	if (lst_b)
	{
		printf("| b : ");
		while (lst_b)
		{
			printf("%d ", lst_b->data);
			lst_b = lst_b->next;
		}
	}
	printf("\n");
}


void	ft_lstADD_c(char *str, t_lst_p *lst_a)
{
	t_lst_p	*new_lst;
	t_lst_p	*first;


	if (!(new_lst = malloc(sizeof(t_lst_p))))
	{
		printf("Error malloc");
		exit (0);
	}
	first = new_lst;
	new_lst->next = NULL;
	lst_a->next = first;
	lst_a = lst_a->next;
	lst_a->data = ft_atoi(str);
}

t_lst_p	*ft_lstNEW(void)
{
	t_lst_p *x_lst;

	x_lst = NULL;
	if (!(x_lst = malloc(sizeof(t_lst_p))))
	{
		printf("Error malloc");
		exit (0);
	}
	x_lst->data = -1;
	x_lst->next = NULL;

	return (x_lst);
}

int			ft_main_lst_a(char **av, t_lst *lst)
{
	t_lst_p	*first;
	int 	i;

	lst->lst_a = ft_lstNEW();
	first = lst->lst_a;
	i = 1;
	if (ft_strcmp(av[i], "-v") == 0)
	{
		lst->opt_v = 1;
		av++;
		printf("oui\n");
	}
	if (av[i])
	{
		if (ft_parse_atoi(av) == 0)
			return (0);
		printf("a : ");
		lst->lst_a->data = ft_atoi(av[i]);
		printf("%d ", lst->lst_a->data);
		i++;
		while (av[i])
		{
			ft_lstADD_c(av[i], lst->lst_a);
			lst->lst_a = lst->lst_a->next;
			printf("%d ", lst->lst_a->data);
			i++;
		}
	}
	lst->lst_a = first;
	printf("\n");
	return (1);
}
