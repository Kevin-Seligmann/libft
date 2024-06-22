/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kseligma <kseligma@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 20:56:17 by kseligma          #+#    #+#             */
/*   Updated: 2024/02/14 06:42:35 by kseligma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *s, int c, size_t n)
{
	char	l;
	char	*p;
	size_t	i;

	p = (char *) s;
	l = (unsigned char) c;
	if (n <= 0)
		return (0);
	i = 0;
	while (*p != l && i < n)
	{
		p ++;
		i ++;
	}
	if (*p == l && i != n)
		return (p);
	return (0);
}
