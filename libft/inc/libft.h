/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kseligma <kseligma@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 22:35:32 by kseligma          #+#    #+#             */
/*   Updated: 2024/09/04 04:26:00 by kseligma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

// Module 1

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, unsigned long n);
void	*ft_memmove(void *dst, const void *src, unsigned long len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);

// Module 2

/*
	Returns a malloc'd substring of `s` of maximum size `len`, from the `start` position.
	If the returning string has length 0, it returns an empty string.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len);

/*
	Returns a string result of joining 's1' and 's2' .
*/
char	*ft_strjoin(char const *s1, char const *s2);

/*
	Returns a string result of removing the characters in `set` from the start and
	end of `s1`.
*/
char	*ft_strtrim(char const *s1, char const *set);

/*
	Returns a null-terminated array of strings, result of splitting the `s` string by the `c` char.
*/
char	**ft_split(char const *s, char c);

/*
	Returns a string equivalent to `n`.
*/
char	*ft_itoa(int n);

/*
	Returns a string result of applying `f` to all its elements.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/*
	Applies `f` to a string.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

/*
	Writes `c` on the `fd` file.
*/
void	ft_putchar_fd(char c, int fd);

/*
	Writes `s` on the `fd` file.
*/
void	ft_putstr_fd(char *s, int fd);

/*
	Writes `s` on the `fd` file, and a newline.
*/
void	ft_putendl_fd(char *s, int fd);

/*
	Writes the `n` integer on the `fd` file.
*/
void	ft_putnbr_fd(int n, int fd);

// Module 3

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/*
	Returns a new list node with `content` content.
*/
t_list	*ft_lstnew(void *content);

/*
	Adds the node `new` to the front of the list that starts in `*lst`.
*/
void	ft_lstadd_front(t_list **lst, t_list *new);

/*
	Returns the size of the list `lst`.
*/
int		ft_lstsize(t_list *lst);

/*
	Returns the last node of the list `lst`
*/
t_list	*ft_lstlast(t_list *lst);

/*
	Adds the node `new` to the back of the list starting in `*lst`
*/
void	ft_lstadd_back(t_list **lst, t_list *new);

/*
	Applies the `del` function on the content of `lst` and frees `lst`.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/*
	Applies the `del` function on the content of `lst` and all subsecuent nodes, and frees them.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *));

/*
	Applies `f` to all the members of the `lst` list.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *));

/*
	Returns a list that is the result of applying `f` to all members of `lst`.
	In case of memory failure, calls `ft_lstclear` on the unfinished new list.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

// Module 4

# include "ft_printf.h"
# include "get_next_line.h"


/*
	Returns a pointer to the first ocurrence of `c` in `arr`. Searchs up to `n` integers.
*/
int		*ft_intnchr(int *arr, int c, int n);

/*
	Allocates `count` * `size` bytes and returns it as void *. Sets the last byte at 0.
*/
void	*ft_lastloc(size_t count, size_t size);

/*
	Returns a string result of joining all elements on `p_s`, appending `sep` on the middle of them.
	`p_s` must be size `n`.
*/
char	*ft_strsnjoin(char **p_s, char *sep, size_t n);

/*
	Like `ft_split` but with many separators.
*/
char	**ft_split_charset(char const *s, char *c);

/*
	Returns the size of a null-terminated char **.
*/
int		ft_arr_count_arguments(char **arr);

/*
	Frees a null-terminated char **, and all its char *s.
*/
void	ft_arr_free(char **arr);

/*
	Line `ft_arr_free` but with ints.
*/
void	ft_arr_free_int(int **arr);

/*
	Returns a string result of transforming `n` to the base `base`.
*/
char	*ft_itoa_base(size_t n, char *base);
int		ft_strcmp(char *s1, char *s2);



#endif
