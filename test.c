/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrumbac <agrumbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 05:01:34 by agrumbac          #+#    #+#             */
/*   Updated: 2018/01/16 18:32:29 by agrumbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			zerg(int a, char *b)
{
	ft_printf("So Kawaii : %d %s!\n", a, b);
}

void			terran(int a, char *b)
{
	ft_printf("So Lame : %d %s!\n", a, b);
}

void			protoss(int a, char *b)
{
	ft_printf("So Cool : %d %s!\n", a, b);
}

int				main(int ac, char **av)
{
	const int	a					= ft_atoi(av[1]);
	const char	*b					= av[2];
	void		(*f[4])(int, char*)	= {&zerg, &terran, &protoss, 0};

	if (ac != 3)
		return (ft_printf("You lame ass!\n"));
	f[0](a, b);
	return (0);
}

/*
**	int			main(int ac, char **av)
**	{
**		char	*var = malloc(42);
**		ft_printf("%p\n", var);
**		return (0);
**	}
*/
