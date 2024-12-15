NAME	=	Push_swap
CC	=	gcc
CFLAGS	=	-Wall	-Werror	-Wextra	-I./includes	-I/libft
LIBFT_DIR	=	./libft
LIBS	=	-L$(LIBFT_DIR)	-lft
SRCS	=	src/push_swap.c	src/utils_push.c	src/utils_reverse_rotate.c	src/utils_rotate.c\
        	src/utils_swap.c
OBJS	=	$(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	make	-s	-C	$(LIBFT_DIR)
	$(CC)	$(CFLAGS)	-o	$(NAME)	$(OBJS)	$(LIBS)

%.o:	%.c	includes/pushswap.h
	$(CC)	$(CFLAGS)	-I./includes	-c	$<	-o	$@

clean:
	rm	-f	$(OBJS)
	make	-s	-C	$(LIBFT_DIR)	clean

fclean:	clean
	make	-s	-C	$(LIBFT_DIR)	fclean
	rm	-f	$(NAME)

re:	fclean	all

.PHONY:	all	clean	fclean	re
