/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kseligma <kseligma@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:39:32 by kseligma          #+#    #+#             */
/*   Updated: 2024/02/17 16:10:09 by kseligma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(size_t n, char *base)
{
	char	p_c[32 + 1];
	int		base_len;
	int		i;

	if (!base || !(*base))
		return (0);
	base_len = ft_strlen(base);
	i = 32 - 1;
	while (n > 0 || i == 32 - 1)
	{
		p_c[i] = base[n % base_len];
		n /= base_len;
		i --;
	}
	p_c[32] = 0;
	return (ft_strdup(&(p_c[i + 1])));
}
