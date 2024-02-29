/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:05:05 by licohen           #+#    #+#             */
/*   Updated: 2024/02/25 18:17:23 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
		return (nb = nb * (ft_recursive_power(nb, (power - 1))));
	return (0);
}
/*
int main()
{
	printf("%d\n", ft_recursive_power(5, 5));
	printf("%d\n", ft_recursive_power(0, 1));
	printf("%d\n", ft_recursive_power(25, 3));
	printf("%d\n", ft_recursive_power(4, 0));
	printf("%d\n", ft_recursive_power(8, 10));
}*/
