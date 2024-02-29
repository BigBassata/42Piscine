/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 20:22:17 by licohen           #+#    #+#             */
/*   Updated: 2024/02/25 17:07:38 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
	nb = (nb * ft_recursive_factorial(nb - 1));
	return (nb);
}
/*
#include <stdio.h>

int main ()
{
	printf("%d", ft_recursive_factorial(20));
	return (0);
}*/
