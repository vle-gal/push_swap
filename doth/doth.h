#ifndef doth_h
# define doth_h
# include <unistd.h>
# include <stdio.h>
# include "libft.h"
# define BUFF_S 50000

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

/**Checker -> main | Component
***
*/
// Result_from_push_swap.c
void			ft_print_patern(char **patern);
char			**ft_r_f_push_swap();
// lst_a.c
void			ft_print(t_lst_p *lst_a, t_lst_p *lst_b, char *patern);
void			ft_lstADD_c(char *str, t_lst_p *lst_a);
t_lst_p			*ft_lstNEW(void);
int				ft_main_lst_a(char **av, t_lst *lst);

/**Patern
***
*/
// swap.c
void			ft_swap_a(t_lst_p *lst_a);
void			ft_swap_b(t_lst_p *lst_b);
void			ft_swap_lst(char **patern, int i, t_lst *lst);
// push.c
t_lst_p			*ft_lstADD_int_before(int nb , t_lst_p *x_lst);
void			ft_push_a(t_lst *lst);
void			ft_push_b(t_lst *lst);
void			ft_push_lst(char **patern, int i, t_lst *lst);
// rotate.c
void			ft_rotate_x(t_lst_p *lst_x);
void			ft_rotate_lst(char **patern, int i, t_lst *lst);
// reverse_rotate.c
void			ft_reverse_rotate_x(t_lst_p *lst_x);
void			ft_reverse_rotate_lst(char **patern, int i, t_lst *lst);
/**parse
***
**/
//parse_arg.c
int				ft_double_split(char **av);
int				ft_parse_atoi(char **av);
//parse_patern.c
int				ft_parse_patern(char **patern);


#endif
