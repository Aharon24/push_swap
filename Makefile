CC = cc
W = -Wall -Wextra -Werror 
TARGET =  push_swap 
INCLUDES = -I.  -ILibft -Ift_printf 


SRCS = push_swap.c  ft_printf/ft_char.c ft_printf/ft_format.c ft_printf/ft_puthex_x.c ft_printf/printf.c \
main.c  ft_memory.c Libft/ft_split.c ft_get_number.c ft_check.c ft_exit.c ft_convert_int.c ft_list.c	\
Libft/ft_strlen.c Libft/ft_atoi.c
  
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET):	$(OBJS)
	$(CC)   $(OBJS)  $(INCLUDES)  -o $(TARGET) 
%.o: %.c
	$(CC)   -c $< -o $@
clean:
	rm	-f	$(OBJS)
fclean:
	rm	-f	$(TARGET) $(OBJS)
re:
	$(MAKE) fclean
	$(MAKE)	all
.PHONY: all clean fclean re
