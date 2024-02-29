/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:05:58 by licohen           #+#    #+#             */
/*   Updated: 2024/02/13 17:47:35 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int nbr1, int nbr2)
{
	char	c1;
	char	c2;
	char	c3;
	char	c4;

	c1 = '0' + nbr1 / 10;
	c2 = '0' + nbr1 % 10;
	c3 = '0' + nbr2 / 10;
	c4 = '0' + nbr2 % 10;
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, " ", 1);
	write(1, &c3, 1);
	write(1, &c4, 1);
	if (!(nbr1 == 98 && nbr2 == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	nbr1;
	int	nbr2;

	nbr1 = 0;
	while (nbr1 < 99)
	{	
		nbr2 = nbr1 +1;
		while (nbr2 <= 99)
		{	
			ft_print(nbr1, nbr2);
			nbr2++;
		}
		nbr1++;
	}
}
