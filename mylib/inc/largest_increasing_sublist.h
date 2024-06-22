/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   largest_increasing_sublist.h                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kseligma <kseligma@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:22:07 by kseligma          #+#    #+#             */
/*   Updated: 2024/02/25 14:22:10 by kseligma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LARGEST_INCREASING_SUBLIST_H

# define LARGEST_INCREASING_SUBLIST_H

# include <stdlib.h>

typedef struct s_alg_data
{
	int	**result;
	int	*preds;
	int	*indexs;
	int	length;
}	t_alg_data;

int	largest_increasing_sublist(int **result, int *list, int size);

#endif
