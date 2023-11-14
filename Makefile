NAME	:=	libftprintf.a
CFLAGS	:=	-Wall -Wextra -Werror -Ilibft
LDFLAGS	:=	-Llibft -lft

RM		:=	rm -f
SRC	:=	ft_printf.c \
		ft_printf1.c \
		ft_printf2.c \
		ft_printf_utils0.c \
		ft_printf_utils1.c \
		ft_printf.h \

OBJ	:=	$(SRC:.c=.o)

%.o:		%.c
				$(CC) $(CFLAGS) -Ilibft $< -c

$(NAME):	$(OBJ)
				$(MAKE) -C libft bonus
				cp libft/libft.a $(NAME)
				$(AR) rcs $(NAME) $(OBJ)

all:		$(NAME)

test:		$(OBJ)
				$(MAKE) -C libft bonus
				cp libft/libft.a .
				$(CC) $(CFLAGS) -o a.out $(OBJ) libft.a -Ilibft

clean:
				$(MAKE) -C libft clean
				$(RM) *.o */*.o */*/*.o

fclean:		clean
				$(MAKE) -C libft fclean
				$(RM) *.a *.out

re:			fclean all

.PHONY:		all clean fclean re test bonus
