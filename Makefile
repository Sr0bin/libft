# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/13 20:33:05 by rorollin          #+#    #+#              #
#    Updated: 2025/04/20 20:46:03 by rorollin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

#SOURCES######################

SOURCES_STRING = ft_strlen.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
				 ft_atoi.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_itoa.c ft_valid_base.c \
				 ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c ft_strlen_c.c\
				 ft_sub_n_str.c ft_validnumber.c

SOURCES_MEMORY = ft_memset.c ft_bzero.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_calloc.c

SOURCES_LIST = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
				ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
				ft_lstmap.c

SOURCES_I_O = ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
				ft_uputnbr_base_fd.c ft_putnbr_base_fd.c

SOURCES_CHAR = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			   ft_toupper.c ft_tolower.c ft_issign.c ft_iswhitespace.c

SOURCES_FT_PRINTF = ft_printf.c ft_print_d.c ft_print_p.c ft_print_x_upper.c ft_print_x.c  \
					ft_print_i.c ft_print_s.c ft_print_u.c ft_print_c.c ft_parser.c ft_format.c\
					ft_dprintf.c

SOURCES_GET_NEXT_LINE = get_next_line.c ft_strjoin_gnl.c

SOURCES_GEOMETRY = matrixutils.c matrixoperation.c matrixelem.c

SOURCES_DIR = string/ memory/ list/ i_o/ char/ ft_printf/

SOURCES = $(addprefix string/, $(SOURCES_STRING))\
		$(addprefix memory/, $(SOURCES_MEMORY))\
		$(addprefix list/, $(SOURCES_LIST))\
		$(addprefix i_o/, $(SOURCES_I_O))\
		$(addprefix char/, $(SOURCES_CHAR))\
		$(addprefix ft_printf/, $(SOURCES_FT_PRINTF))\
		$(addprefix geometry/, $(SOURCES_GEOMETRY))\
		$(addprefix get_next_line/, $(SOURCES_GET_NEXT_LINE))

#OBJECTS#######################

OBJ_DIR = obj

OBJECTS = $(SOURCES:%.c=$(OBJ_DIR)/%.o)

#DEPS##########################

DEPS = $(SOURCES:%.c=$(OBJ_DIR)/%.d)

#INCLUDES#######################

HEADERS_DIR = include/ 

HEADERS_NAME = ft_printf.h char.h i_o.h list.h memory.h string.h get_next_line.h

INCLUDES = $(addprefix -I , $(HEADERS_DIR))

#COMPILER#####################

COMPILER = cc
# CFLAGS = -Wall -Wextra -Werror -MMD -MP -ggdb3
ARCHIVER = ar

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(ARCHIVER) -rcs $@ $(OBJECTS)
	@echo "$(NAME) built succesfully."

$(OBJ_DIR)/%.o: %.c 
	mkdir -p $(dir $@)
	$(COMPILER) $(CFLAGS) $(INCLUDES) -c $< -o $@

-include $(DEPS)

clean:
	rm -rf $(OBJ_DIR)

fclean:
	$(MAKE) clean
	rm -f $(NAME)

re:	
	$(MAKE) fclean 
	$(MAKE) all

.PHONY: all clean fclean re test
