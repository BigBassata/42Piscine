/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:18:33 by licohen           #+#    #+#             */
/*   Updated: 2024/02/21 20:04:05 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int		i;
	int		sign;
	int		num;

	i = 0;
	sign = 1;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
			num = num * 10 + (str[i] - '0');
			i++;
	}
	return (num * sign);
}
/*
int main(int argc, char  **argv)
{
	(void)argc; 
	printf("%d\n", ft_atoi(argv[1]));
	return (0);
}*/
