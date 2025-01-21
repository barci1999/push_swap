NAME	=	push_swap
CC	=	gcc
CFLAGS	=	-Wall	-Werror	-Wextra	-I./includes	-I libft -I printf
LIBFT_DIR	=	./libft
PRINT_DIR	= ./printf
LIBS = -L$(LIBFT_DIR) -lft -L$(PRINT_DIR) -lftprintf -no-pie
SRCS	=	main.c src/utils_push.c	src/utils_reverse_rotate.c	src/utils_rotate.c\
        	src/utils_swap.c src/utils_arguments.c src/utils_lst.c src/utils_list_2.c src/utils_algorithm.c\
			src/utils_sorts.c src/utils_ksort.c
OBJS	=	$(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	make	-s	-C  $(PRINT_DIR)
	make	-s	-C	$(LIBFT_DIR)
	$(CC)	$(CFLAGS)	-o	$(NAME)	$(OBJS)	$(LIBS)

%.o:	%.c	includes/pushswap.h
	$(CC)	$(CFLAGS)	-I./includes	-c	$<	-o	$@

clean:
	rm	-f	$(OBJS)
	make	-s	-C	$(LIBFT_DIR)	clean
	make 	-s  -C  $(PRINT_DIR)	clean

fclean:	clean
	make	-s	-C	$(LIBFT_DIR)	fclean
	make	-s  -C  $(PRINT_DIR)    fclean
	rm	-f	$(NAME)

re:	fclean	all

.PHONY:	all	clean	fclean	re
