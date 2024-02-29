/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rribette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 11:26:07 by rribette          #+#    #+#             */
/*   Updated: 2024/02/18 22:31:24 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ex00.h"

int	recursive_find(int **tab, int *priority, int size)
{
	int	i;
	int	x;
	int	y;

	x = *priority / 10;
	y = *priority % 10;
	if (*priority == 0 && is_valid(tab, *(priority - 1), size))
		return (1);
	i = 1;
	while (i <= size)
	{
		tab[x][y] = i;
		if (is_valid(tab, *priority, size))
		{
			if (recursive_find(tab, priority + 1, size))
				return (1);
		}
		i++;
	}
	tab[x][y] = 0;
	return (0);
}

int	count_vert(int **tab, int index, int direction, int size)
{
	int	i;
	int	max_height;
	int	res;
	int	j;

	res = 0;
	max_height = 0;
	i = 1;
	while (i <= size)
	{
		if (direction)
			j = size + 1 - i;
		else
			j = i;
		if (!tab[j][index])
			return (0);
		if (tab[j][index] > max_height)
		{
			res++;
			max_height = tab[j][index];
		}
		i++;
	}
	return (res);
}

int	count_hor(int **tab, int index, int direction, int size)
{
	int	i;
	int	max_height;
	int	res;
	int	j;

	res = 0;
	max_height = 0;
	i = 1;
	while (i <= size)
	{
		if (direction)
			j = size + 1 - i;
		else
			j = i;
		if (!tab[index][j])
			return (0);
		if (tab[index][j] > max_height)
		{
			res++;
			max_height = tab[index][j];
		}
		i++;
	}
	return (res);
}

int	already_used(int **table, int index, int size)
{
	int	x;
	int	y;
	int	i;

	x = index / 10;
	y = index % 10;
	i = 1;
	if (!table[x][y])
		return (0);
	while (i <= size)
	{
		if (table[x][i] == table[x][y] && i != y)
			return (1);
		if (table[i][y] == table[x][y] && i != x)
			return (1);
		i++;
	}
	return (0);
}

int	is_valid(int **table, int index, int size)
{
	int	x;
	int	y;
	int	test;

	x = index / 10;
	y = index % 10;
	if (already_used(table, index, size))
		return (0);
	test = count_vert(table, y, 0, size);
	if ((test != table[0][y]) && test)
		return (0);
	test = count_vert(table, y, 1, size);
	if ((test != table[size + 1][y]) && test)
		return (0);
	test = count_hor(table, x, 0, size);
	if ((test != table[x][0]) && test)
		return (0);
	test = count_hor(table, x, 1, size);
	if ((test != table[x][size + 1]) && test)
		return (0);
	return (1);
}
