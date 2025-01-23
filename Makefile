NAME        = push_swap
BONUS_NAME  = checker

CC          = cc
CFLAGS      = -Wall -Werror -Wextra -I./includes -I libft -I printf
LIBFT_DIR   = ./libft
PRINT_DIR   = ./printf
LIBS        = -L$(LIBFT_DIR) -lft -L$(PRINT_DIR) -lftprintf
SRCS        = src/main.c src/utils_push.c src/utils_reverse_rotate.c src/utils_rotate.c \
              src/utils_swap.c src/utils_arguments.c src/utils_lst.c src/utils_list_2.c \
              src/utils_algorithm.c src/utils_sorts.c src/utils_ksort.c

BONUS_SRC    = src_bonus/main.c src_bonus/utils_moves_comprover.c


BONUS_SRCS   = $(filter-out src/main.c, $(SRCS))

OBJS         = $(SRCS:.c=.o)
BONUS_OBJ    = $(BONUS_SRCS:.c=.o) $(BONUS_SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	make -s -C $(PRINT_DIR)
	make -s -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBS)

%.o: %.c includes/pushswap.h
	$(CC) $(CFLAGS) -I./includes -c $< -o $@


clean:
	rm -f $(OBJS)
	rm -f $(BONUS_OBJ)
	make -s -C $(LIBFT_DIR) clean
	make -s -C $(PRINT_DIR) clean


fclean: clean
	make -s -C $(LIBFT_DIR) fclean
	make -s -C $(PRINT_DIR) fclean
	rm -f $(NAME)
	rm -f $(BONUS_NAME)

bonus: $(BONUS_NAME)

$(BONUS_NAME): $(BONUS_OBJ)
	make -s -C $(PRINT_DIR)
	make -s -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) -o $(BONUS_NAME) $(BONUS_OBJ) $(LIBS)


re: fclean all

.PHONY: all clean fclean re bonus

