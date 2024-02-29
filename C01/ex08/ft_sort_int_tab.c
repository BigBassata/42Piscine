/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 10:16:31 by licohen           #+#    #+#             */
/*   Updated: 2024/02/14 13:16:10 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	j = 1;
	while (j < size)
	{
		i = 1;
		while (i < size - j +1)
		{
			if (tab[i - 1] > tab[i])
				ft_swap(&tab[i - 1], &tab[i]);
			i++;
		}
		j++;
	}
}
/*
int main()
{
	int tab[5] = {65, 23, 54, 78, 98};
	int i = 0;
	ft_sort_int_tab(tab, 5);
	while (i < 5)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}*/
