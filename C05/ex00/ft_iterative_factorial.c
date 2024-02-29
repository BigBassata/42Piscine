/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:34:18 by licohen           #+#    #+#             */
/*   Updated: 2024/02/25 17:04:52 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	total;

	total = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		total = total * nb;
		nb--;
	}
	return (total);
}
/*
#include <stdio.h>

int main() 
{
	printf("%d\n", ft_iterative_factorial(5));
	return (0);
}*/
