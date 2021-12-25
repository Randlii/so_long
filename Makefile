NAME	=	so_long

SRCS	=	$(wildcard src/*.c)

HEADER	=	include/

OBJ		=	$(SRCS:%.c=%.o)

LIB		=	libft/libft.a

INCLUDE	=	-I

СС		=	gcc

FLAGS	=	-Wall -Wextra -Werror

RM		= rm -rf

MLX 	= -framework OpenGL -framework AppKit -lmlx
#---------------------------------------------------------------------------------
RED		=	\033[1;31m
BLUE	=	\033[1;34m
YELLOW	=	\033[1;33m
WHITE	=	\033[1;32m
PUPURE	=	\033[1;35m
GRY		=	\033[1;30m
TURQUOISE =	\033[36;1m
END		=	\033[0m
#---------------------------------------------------------------------------------
.PHONY:		all	clean	fclean	re	bonus	libft

all:		libft $(NAME)

libft:
			@$(MAKE) -C libft/


$(NAME):	$(OBJ)
			$(CC) $(FLAGS) $(OBJ) $(LIB) -o $(NAME)
			@echo "$(TURQUOISE)\n< Complited $(NAME) >\n$(END)"

%.o 	:	%.c
			$(CC) $(FLAGS)  -c $< -o $@ -I $(HEADER)

clean:
			@$(RM) $(OBJ)
			@$(MAKE) -C libft/ clean
			@echo "$(YELLOW)\n< Cleaning succeed >\n$(END)"

fclean:		clean
			@$(MAKE) -C libft/ fclean
			@$(RM) $(NAME)
			@echo "$(YELLOW)\n< All created files were deleted >\n$(END)"

re:			fclean all
			@echo "$(YELLOW)\n< Remake done >\n$(END)"


