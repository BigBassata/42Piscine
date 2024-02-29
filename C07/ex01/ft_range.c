/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:13:50 by licohen           #+#    #+#             */
/*   Updated: 2024/02/27 23:27:36 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (i <= max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
int main()
{
	int size;
	int *tab;
	int min; 
	int max;
	int i = 0;

	min = -5;
	max = -10;
	size = max - min;
	tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}*/
