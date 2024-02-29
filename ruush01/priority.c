/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   priority.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rribette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:47:51 by rribette          #+#    #+#             */
/*   Updated: 2024/02/18 21:12:18 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ex00.h"

int	*priority(int **tab, int size)
{
	int	*priority;
	int	*index;
	int	i;
	int	j;

	priority = init_priority(tab, size);
	index = malloc(size * size * sizeof(int));
	i = 1;
	while (i <= size)
	{
		j = 1;
		while (j <= size)
		{
			index[size * (i -1) + (j - 1)] = 0;
			index = fill_index(index, 10 * i + j, tab, size);
			j++;
		}
		i++;
	}
	i = 0;
	sort_priority(priority, index, size);
	free(index);
	return (priority);
}

void	sort_priority(int *priority, int *index, int size)
{
	int	i;
	int	x;
	int	y;

	i = find_max(index, size);
	while (i != -1)
	{
		x = (i / size) + 1;
		y = (i % size) + 1;
		*priority = 10 * x + y;
		priority++;
		index[i] = 0;
		i = find_max(index, size);
	}
	*priority = 0;
}

int	find_max(int *index, int size)
{
	int	i;
	int	idx;

	i = 0;
	idx = 0;
	while (i < size * size)
	{
		if (index[i] > index[idx])
			idx = i;
		i++;
	}
	if (!index[idx])
		return (-1);
	return (idx);
}

int	*fill_index(int *list_index, int idx, int **tab, int size)
{
	int	k;
	int	i;
	int	j;

	i = idx / 10;
	j = idx % 10;
	k = 0;
	if (!tab[i][j])
	{
		list_index[size * (i - 1) + (j - 1)]++;
		while (k < size)
		{
			if (tab[i][k + 1])
				list_index[size * (i - 1) + (j - 1)]++;
			if (tab[k + 1][j])
				list_index[size * (i - 1) + (j - 1)]++;
			k++;
		}
	}
	return (list_index);
}

int	*init_priority(int **tab, int size)
{
	int	i;
	int	res;
	int	*priority;

	i = 0;
	res = 0;
	while (i < size * size)
	{
		if (!tab[(i / size) + 1][(i % size) + 1])
			res++;
		i++;
	}
	priority = malloc((res + 1) * sizeof(int));
	i = 0;
	while (i < res + 1)
	{
		*(priority + i) = 0;
		i++;
	}
	return (priority);
}
