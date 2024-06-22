/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kseligma <kseligma@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 21:23:31 by kseligma          #+#    #+#             */
/*   Updated: 2024/01/16 22:26:52 by kseligma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define BUFF 11

char	*ft_itoa(int n)
{
	char	p_c[BUFF + 1];
	int		i;
	int		b_positive;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	b_positive = 1;
	if (n < 0)
	{
		n *= -1;
		b_positive = 0;
	}
	i = BUFF - 1;
	while (n > 0 || i == BUFF - 1)
	{
		p_c[i] = n % 10 + '0';
		n /= 10;
		i --;
	}
	if (!b_positive)
		p_c[i --] = '-';
	p_c[BUFF] = 0;
	return (ft_strdup(&(p_c[i + 1])));
}
