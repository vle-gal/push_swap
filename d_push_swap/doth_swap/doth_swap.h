#ifndef doth_swap_h
# define doth_swap_h
# include "libft.h"

typedef struct		s_lst_p
{
	int				data;
	struct s_lst_p	*next;
}					t_lst_p;

typedef struct		s_lst
{
	struct s_lst_p	*lst_a;
	struct s_lst_p	*lst_b;
	int				opt_v;
}					t_lst;

/**push_swap -> main | Component_Push
***
*/
// lst_a.c
void			ft_print(t_lst_p *lst_a, t_lst_p *lst_b, char *patern);
void			ft_lstADD_c(char *str, t_lst_p *lst_a);
t_lst_p			*ft_lstNEW(void);
int				ft_main_lst_a(char **av, t_lst *lst);

/**parse
***
**/
//parse_arg.c
int				ft_double_split(char **av);
int				ft_parse_atoi(char **av);

#endif
