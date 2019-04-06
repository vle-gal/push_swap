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
NAME = checker #Makefile simple
#les Path finding
vpath %.c d_Checker d_Checker/Component_ft d_Checker/Patern_ft d_Checker/Parser_ft #les .c
vpath_h = -Idoth -Ilibft/doth #les .h
LIB = -Llibft -lft

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
OBJS := $(addprefix $(OBJDIR)/, checker.o \
								lst_a.o result_from_push_swap.o \
								parse_arg.o parse_patern.o \
								swap.o push.o rotate.o reverse_rotate.o)

$(OBJDIR)/%.o : %.c
	@gcc $(CPPFLAGS) $(CFLAGS) $(vpath_h) -Wall -Wextra -Werror -c \
	$(OUTPUT_OPTION) $<

#les règles
all: $(OBJS) doth/doth.h
	@make -C libft/
	@make -C d_push_swap/
	@gcc $(LIB) -o checker $(OBJS)
	@echo $(R)Hail to the King Baby!
	@echo --------------$(X)
	./push_swap 2 1
	@# ./push_swap 2 | ./checker -v 2 1 3 4
	@# cat test | ./checker -v 3 2 1 0
	@echo $(R)--------------


$(OBJS): | $(OBJDIR)

$(OBJDIR):
	@mkdir $(OBJDIR)

#les outils
clean :
	@rm -rf $(OBJDIR)
	@echo $(R)Hmm... so there is life after death..

fclean : clean
	@rm checker push_swap

re : fclean
	@make

clib :
	@make -C libft/ clean
