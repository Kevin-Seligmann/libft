VPATH = src:inc

#Directories
SRC_DIR = src

INC_DIR = inc

OBJ_DIR = obj

LFT_DIR = libft

FPF_DIR = ft_printf

GNL_DIR = get_next_line

#Source files
LFT_O = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o \
	  ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o \
	  ft_strlcpy.o ft_strlcat.o ft_toupper.o ft_tolower.o ft_strchr.o \
	  ft_strrchr.o ft_strncmp.o ft_memchr.o ft_memcmp.o ft_strnstr.o \
	  ft_atoi.o ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o \
	  ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o ft_striteri.o \
	  ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o \
	  ft_lstclear.o ft_lstdelone.o ft_lstiter.o ft_lstlast.o ft_lstmap.o \
	  ft_lstnew.o ft_lstsize.o ft_lstadd_back.o ft_lstadd_front.o ft_itoa_base.o \
	  ft_strsnjoin.o ft_lastloc.o largest_increasing_sublist.o ft_intnchr.o \
	  ft_split_charset.o

FPF_O = ft_printf.o ft_printf_specified.o ft_printf_order.o \
		ft_printf_write_extra.o

GNL_O = get_next_line.o get_next_line_utils.o

OBJ = $(addprefix $(OBJ_DIR)/$(LFT_DIR)/, $(LFT_O)) \
	$(addprefix $(OBJ_DIR)/$(FPF_DIR)/, $(FPF_O)) \
	$(addprefix $(OBJ_DIR)/$(GNL_DIR)/, $(GNL_O))

#Header files
LFT_H = libft.h largest_increasing_sublist.h

FPF_H = ft_printf.h

GNL_H = get_next_line.h

HDR = $(addprefix $(INC_DIR)/, $(LFT_H)) \
	$(addprefix $(INC_DIR)/, $(FPF_H)) \
	$(addprefix $(INC_DIR)/, $(GNL_H))

#Flags
FLAGS = -Wall -Wextra -Werror

#Compiler
CC = cc

#Static linker
LNK = ar
LNK_FLAGS = -rc

#Target name
NAME = libft.a

#Colors
YELLOW = "\e[33m"
GREEN = "\e[32m"
NO_COLOR = "\e[0m"

all: $(NAME)

$(NAME): $(OBJ)
	@$(LNK) $(LNK_FLAGS) $(NAME) $(OBJ)
	@echo $(YELLOW)mylib - Linking:$(NO_COLOR) $(notdir $(NAME))

$(OBJ_DIR)/%.o:%.c $(HDR) Makefile
	@$(CC) -I$(INC_DIR) $(FLAGS) -c $< -o $@
	@echo $(YELLOW)mylib - Compiling object file:$(NO_COLOR) $(notdir $@)

clean:
	@rm -f $(OBJ)
	@echo $(YELLOW)mylib - Removing:$(NO_COLOR) Object files

fclean: clean
	@rm -f $(NAME)
	@echo $(YELLOW)mylib - Removing:$(NO_COLOR) $(NAME)

re: fclean all

contents:
	@echo $(YELLOW)Libft MAKEFILE Contents
	@echo \
		$(GREEN)Objects:$(NO_COLOR) $(OBJ) \
		$(GREEN)Includes:$(NO_COLOR) $(INCLUDES) \
		$(GREEN)Headers:$(NO_COLOR) $(HDR) \
		| tr ' ' '\n'

.PHONY: clean fclean all re contents
