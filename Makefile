#**************************************************************************** #
# #
# :: : :: :: :: ::#
#Makefile : + : : + : : + : #
#+ : + + : + + : + #
#By : jsouza < jsouza @student .42lisboa.com> + # + + : ++# + #
#+ #+ #+ #+ #+ #+ + #+ #
#Created : 2025 / 10 / 17 09 : 56 : 22 by jsouza # + # # + # #
#Updated : 2025 / 10 / 29 16 : 10 : 48 by jsouza## # ########.fr #
# #
#**************************************************************************** #

NAME = libft.a

CC = cc -Wall -Wextra -Werror
AR = ar rcs

SRC = ft_isalnum.c ft_isalpha.c ft_isdigit.c \
	ft_isascii.c ft_isprint.c ft_strlen.c \
	ft_memset.c ft_bzero.c ft_memcpy.c \
	ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c \
	ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRC_BONUS = ft_lstadd_back_bonus.c ft_lstclear_bonus.c ft_lstmap_bonus.c \
			ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			ft_lstlast_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c


OBJ_DIR = obj

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

OBJ_BONUS = $(addprefix $(OBJ_DIR)/, $(SRC_BONUS:.c=.o))

NO_RELINK_PLS = .no_relink_pls

all: $(NAME)
	@echo "	\033[1;5;38;2;100;255;100mDONE $(NAME)\033[0m"

bonus: $(NO_RELINK_PLS)
	@echo "	\033[1;5;38;2;100;255;100mDONE $(NAME)\033[0m"

$(NO_RELINK_PLS): $(OBJ) $(OBJ_BONUS)
	@echo "	\033[1;38;2;246;255;100mDONE OBJ\033[0m"
	@touch $(NO_RELINK_PLS)
	@$(AR) $(NAME) $(OBJ) $(OBJ_BONUS)
	

$(NAME): $(OBJ)
	@echo "	\033[1;38;2;246;255;100mDONE OBJ\033[0m"
	@$(AR) $(NAME) $(OBJ)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@echo "	\033[1;38;2;246;255;100mDONE OBJ_DIR\033[0m"

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@$(CC) -I . -c $< -o $@
	
clean:
	@rm -rf $(OBJ_DIR)
	@rm -f $(NO_RELINK_PLS)
	@echo "	\033[48;2;255;100;100;1;38mALL .o CLEAN\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "	\033[48;2;255;0;0;1;38mBINARY CLEAN\033[0m"

re: fclean all

test: fclean bonus
	@$(CC) -I. .main/main.c $(NAME) -o test
	@./test
	@echo "	\033[5;1;38;2;0;255;255mtest ok\033[0m"
	@rm -f test
	@rm -rf $(OBJ_DIR)
	@rm -f $(NAME)
	@rm -f $(NO_RELINK_PLS)
	@echo "	|	\033[48;2;255;0;0;5;1;38;2;255;255;255mall clean\033[0m"

.PHONY: all clean fclean re test bonus