# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gle-roux <gle-roux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 12:57:00 by gle-roux          #+#    #+#              #
#    Updated: 2022/11/22 11:46:13 by gle-roux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#------------------------------------------------------------------------------#
#                                VARIABLES                                     #
#------------------------------------------------------------------------------#

# Compiler and flags
CC		=	gcc
CFLAGS	= 	-Wall -Wextra -Werror

# Remove and Archives
RM		=	rm -rf
ARCH	=	ar rcs	

# Dir and file names
NAME		=	libftprintf.a
SRCS		=	ft_len.c \
				ft_printf.c \
				ft_put.c \
				ft_type.c
OBJS		=	$(SRCS:.c=.o)

#------------------------------------------------------------------------------#
#                                 TARGETS                                      #
#------------------------------------------------------------------------------#

# Colors settings
WHITE		:= \033[0m
RED			:= \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
PINK		:= \033[1;35m
CYAN		:= \033[1;36m

# Creation of the executable
all: $(NAME)

# Compile library
$(NAME): $(OBJS)
	@$(ARCH) $(NAME) $(OBJS)
	@echo "$(GREEN)Libftprintf is done ◡̈ $(WHITE)"
	
# Create all files .o (object) from files .c (source code)
.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) 

# Removes objects
clean:
	@$(RM) $(OBJS)
	@echo "$(YELLOW)All $(NAME) objects deleted ✓$(WHITE)"

# Removes all objects and executables
fclean: clean
	@$(RM) $(NAME)
	@echo "$(BLUE)All $(NAME) exec. and archives successfully deleted ✓ $(WHITE)"

# Removes objects and executables and remake
re: fclean all

# Avoids file-target name conflicts
.PHONY: all clean fclean re