/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:42:11 by licohen           #+#    #+#             */
/*   Updated: 2024/02/28 12:46:49 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void	ft_fill_array(int *ptr, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	size = max - min;
	while (i < size)
	{
		ptr[i] = min;
		++min;
		++i;
	}
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (!*range)
		return (-1);
	i = 0;
	ft_fill_array(*range, min, max);
	return (size);
}
/*
int ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int *range;

	printf("5:%d\n", ft_ultimate_range(&range, 0, 5));
	printf("0:%d\n", ft_ultimate_range(&range, 3, 3));	
	printf("2:%d\n", ft_ultimate_range(&range, -1, 1));
	printf("-1, 0 : %d, %d", range[0], range[1]);
}*/
