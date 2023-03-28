# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rapelcha <rapelcha@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 09:23:06 by rapelcha          #+#    #+#              #
#    Updated: 2022/11/08 16:03:21 by rapelcha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#------------------------------------------------------------------------------#
#                                VARIABLES                                     #
#------------------------------------------------------------------------------#

NAME = libftprintf.a
LIBFT = libft.a
LDIR = libft/

# Compiler and flags
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -f

# Sources are all .c files
SRCS	=	ft_printf.c\
			ft_printfc.c\
			ft_printfp.c\
			ft_printfd.c\
			ft_printfs.c\
			ft_printfu.c\
			ft_printfx.c\
			ft_printfxx.c

OBJS = $(SRCS:.c=.o)

#------------------------------------------------------------------------------#
#                                 TARGETS                                      #
#------------------------------------------------------------------------------#

all: $(LDIR)$(LIBFT) $(NAME)

# Generates output file
$(NAME): $(OBJS) $(LDIR)$(LIBFT)
	 cp $(LDIR)$(LIBFT) $@
	 ar rcs $(NAME) $(OBJS) $@
	
# Compiles sources into objects
$(OBJS): $(OBJDIR)%.o : $(SRCDIR)%.c $(INC) | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Creates directory for binaries
$(OBJDIR):
	mkdir -p $@

$(LDIR)$(LIBFT):
	$(MAKE) -C $(LDIR)

# Removes objects
clean:
	$(RM) $(OBJS)
	$(RM) $(LDIR)*.o

# Removes objects and executables
fclean: clean
	$(RM) $(NAME)
	$(RM) $(LDIR)$(LIBFT)

# Removes objects and executables and remakes
re: fclean all