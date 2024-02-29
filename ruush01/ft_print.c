/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 22:08:13 by licohen           #+#    #+#             */
/*   Updated: 2024/02/18 22:29:46 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ex00.h"

void	ft_print(int **tab, int size)
{
	int		i;
	int		j;
	char	c;

	i = 1;
	while (i <= size)
	{
		j = 1;
		while (j <= size)
		{
			c = '0' + tab[i][j];
			write(1, &c, 1);
			if (j < size)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
/*
int main() {
    char tableau[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7};
    int taille = 16;
	 
    ft_print(tableau, taille);

    return 0;
}*/
