# libft

This is a C library containing utilities. Includes four modules. Module I is an imitation of some C standard library functions. Module II consist on functions similar on nature (e.g string manipulation utilities). Module III is an implementation of a linked list. Module IV are any other utilities added after the main project has finished.

#### Module I

ft_isalpha. ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_strlen, ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_strlcpy, ft_strlcat, ft_toupper, ft_tolower, ft_strchr, ft_strrchr, ft_strncmp, ft_memchr, ft_memcmp, ft_strnstr, ft_atoi, ft_calloc, ft_strdup,

More information [Apple developer webpage](developer.apple.com)

#### Module II

ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_itoa, ft_strmapi, ft_striteri, ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd

More information [libft.pdf, part 2](https://github.com/Kevin-Seligmann/libft/blob/main/libft.pdf)

#### Module III

ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap

More information [libft.pdf, part 3](https://github.com/Kevin-Seligmann/libft/blob/main/libft.pdf)
  
#### Module IV
- [get_next_line](https://github.com/Kevin-Seligmann/get_next_line)
- [ft_printf](https://github.com/Kevin-Seligmann/ft_printf)
- char	*ft_strsnjoin(char **arr, char *sep, size_t n). Returns an allocated string with the content of arr (Of size n) separated by sep.
- char	**ft_split_charset(char const *s, char *c). Splits the string s by the characters on c (In the same way as ft_split).
- void	*ft_lastloc(size_t count, size_t size). Allocates count * size bytes and null terminates it.
- char	*ft_itoa_base(size_t n, char *base). Transforms a number to the provided base.
- int	*ft_intnchr(int *arr, int c, int n). Search for the first occurence of c in arr, searchs up to n numbers.
- void	ft_arr_free_int(int **arr). Frees an array of pointers to int that is null terminated.
- void	ft_arr_free(char **arr). Frees an array of strings that is null terminated.
   
The "project" folder contains the files at the time of evaluation. The "libft" folder is an updated version.  

Styleguide: [Norminette](https://github.com/42School/norminette). 

# Usage

- Compile your .o files with flags `-I./libft/inc` (or `-I$(libft_folder)/inc`)
- Link your program with `./libft_folder/libft.a`
- Add the include clause where the library will be used. `#include "libft.h"`
- If a makefile is used, add a rule containing `make --no-print-directory -C $(LFT_FOLDER)` to compile libft.a
- If a makefile is used, consider adding a rule containing `@$(MAKE) --no-print-directory -C $(LFT_FOLDER) fclean` to remove libft binaries

## 42

[42](https://www.42network.org/about-us/) Is a programming school that teaches in an innovative way, focused on an strict model of peer to peer evaluation and self learning via the writting of, mostly, coding projects.

## Score/Testing

 - Evaluation (125/125)
 - [Francinette](https://github.com/xicodomingues/francinette) (All OK)
