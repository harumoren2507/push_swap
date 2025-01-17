NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

SRCS = main.c \
	    core_sort.c \
		  ft_lstclear2.c \
		  lst_utils/lst_utils.c \
		  operations/push.c \
		  operations/rotate.c \
		  operations/swap.c \
		  sort/add_index.c \
		  sort/radix_sort.c \
		  validation/check_args.c \
		  validation/issort_number.c \
		  small_sort/small_sort.c \
		  small_sort/sort_2.c \
		  small_sort/sort_3.c \
		  small_sort/sort_4.c \
		  small_sort/sort_5.c \
		  small_sort/utils_sort_4_5.c \

		  

OBJS	= $(SRCS:.c=.o)

LIBFT_PATH = libft
LIBFT = $(LIBFT_PATH)/libft.a

INCLUDES = -I ./includes-I./libft

#build rules
all: $(LIBFT) $(NAME)

$(LIBFT):	
	$(MAKE) -C $(LIBFT_PATH)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

%.o:	%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(MAKE) -C $(LIBFT_PATH) clean
	rm -f $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFT_PATH) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
