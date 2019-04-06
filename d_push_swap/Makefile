# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vle-gal <vle-gal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/17 15:16:47 by vle-gal           #+#    #+#              #
#    Updated: 2018/01/17 16:12:19 by vle-gal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = push_swap #Makefile simple
#les Path finding
vpath %.c push_swap_main #les .c
vpath_h = -Idoth_swap -I../libft/doth #les .h
LIB = -L../libft -lft

#les couleurs et autre
Y = "\033[33m"
R = "\033[31m"
G = "\033[32m"
B = "\033[34m"
X = "\033[0m"
UP = "\033[A"
CUT = "\033[K"

#les pré règles
OBJDIR := objdiro
OBJS := $(addprefix $(OBJDIR)/, push_swap_main.o \
								push_lst_a.o \
								push_parse_arg.o)

$(OBJDIR)/%.o : %.c
	@gcc $(CPPFLAGS) $(CFLAGS) $(vpath_h) -Wall -Wextra -Werror -c \
	$(OUTPUT_OPTION) $<

#les règles
all: $(OBJS) doth_swap/doth_swap.h
	@gcc $(LIB) -o push_swap $(OBJS)
	@cp push_swap ../
	@echo push_swap NIQUEL


$(OBJS): | $(OBJDIR)

$(OBJDIR):
	@mkdir $(OBJDIR)

#les outils
clean :
	@rm -rf $(OBJDIR)
	@echo $(R)Hmm... so there is life after death..

fclean : clean
	@rm push_swap

re : fclean
	@make
