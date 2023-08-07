vpath %.c string memory includes math char list file gnl printf

CC := cc
CFLAGS := -Wall -Wextra -Werror
CFLAGS += -O3 -finline-functions -ffast-math
NAME := libft.a
OBJ_DIR := build
INCLUDE_DIR := includes
INCLUDES := -I$(INCLUDE_DIR) -I.

STRING_SRC := ft_strncmp.c ft_strnstr.c ft_striteri.c ft_strjoin.c ft_strdup.c ft_itoa.c ft_strtrim.c ft_strlen.c ft_strcmp.c
STRING_SRC += ft_strlcat.c ft_split.c ft_substr.c ft_strlcpy.c ft_strchr.c ft_strrchr.c ft_strmapi.c ft_strcpy.c ft_free_split.c
MEMORY_SRC := ft_memcmp.c ft_memcpy.c ft_calloc.c ft_memset.c ft_bzero.c ft_memchr.c ft_memmove.c
MATH_SRC := ft_atoi.c ft_atof.c
CHAR_SRC := ft_isalnum.c ft_isascii.c ft_isprint.c ft_isalpha.c ft_isdigit.c ft_toupper.c ft_tolower.c ft_isspace.c
LIST_SRCC := ft_lstclear.c ft_lstdelone.c ft_lstadd_front.c ft_lstnew.c ft_lstmap.c ft_lstlast.c ft_lstsize.c ft_lstiter.c ft_lstadd_back.c
FILE_SRC := ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_putchar_fd.c
GNL_SRC := get_next_line_utils.c get_next_line.c
PRINTF_SCR := ft_printf_putnbr.c ft_printf_flags_utils.c ft_printf_putpointer.c ft_printf_putnbr_base.c ft_printf_putstr.c
PRINTF_SCR += ft_printf_strcpy.c ft_printf_atoi.c ft_printf_printnbr.c ft_printf.c ft_printf_putchar.c

SRCS := $(STRING_SRC) $(MEMORY_SRC) $(MATH_SRC) $(CHAR_SRC) $(LIST_SRCC) $(FILE_SRC) $(GNL_SRC) $(PRINTF_SCR)
OBJS := $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re