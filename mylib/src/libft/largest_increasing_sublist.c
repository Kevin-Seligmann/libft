/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   largest_increasing_sublist.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kseligma <kseligma@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:56:27 by kseligma          #+#    #+#             */
/*   Updated: 2024/02/24 18:56:29 by kseligma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "largest_increasing_sublist.h"

static int	allocate(t_alg_data *alg, int n)
{
	*(alg->result) = malloc(n * sizeof(**(alg->result)));
	alg->indexs = malloc((n + 1) * sizeof(*(alg->indexs)));
	alg->preds = malloc(n * sizeof(*(alg->preds)));
	if (!*(alg->result) || !alg->indexs || !alg->preds)
	{
		if (*(alg->result))
			free(*(alg->result));
		if (alg->indexs)
			free(alg->indexs);
		if (alg->preds)
			free(alg->preds);
		*(alg->result) = 0;
		alg->indexs = 0;
		alg->preds = 0;
		return (0);
	}
	return (1);
}

static int	search(int i, int length, int *list, int *indexs)
{
	int	low;
	int	high;
	int	mid;

	low = 1;
	high = length + 1;
	while (low < high)
	{
		mid = (low + high) / 2;
		if (list[indexs[mid]] > list[i])
			high = mid;
		else
			low = mid + 1;
	}
	return (high);
}

static void	build_result(t_alg_data *alg, int *list)
{
	int	l;
	int	i;

	l = alg->indexs[alg->length];
	i = alg->length - 1;
	while (i >= 0)
	{
		(*(alg->result))[i] = list[l];
		l = alg->preds[l];
		i --;
	}
}

int	largest_increasing_sublist(int **result, int *list, int size)
{
	int			l;
	int			i;
	t_alg_data	alg;

	alg.result = result;
	if (!allocate(&alg, size))
		return (0);
	alg.length = 0;
	i = 0;
	while (i < size)
	{
		l = search(i, alg.length, list, alg.indexs);
		alg.indexs[l] = i;
		alg.preds[i] = alg.indexs[l - 1];
		if (l == alg.length + 1)
			alg.length ++;
		i ++;
	}
	build_result(&alg, list);
	free(alg.indexs);
	free(alg.preds);
	return (alg.length);
}
