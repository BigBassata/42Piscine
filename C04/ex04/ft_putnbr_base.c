/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:03:26 by licohen           #+#    #+#             */
/*   Updated: 2024/02/25 21:00:36 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*(str + len))
	{
		len++;
	}
	return (len);
}

int	is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if ((base[i] == '-' || base [i] == '+'))
			return (0);
		if (!((base[i] >= 32) && (base[i] <= 126)))
			return (0);
		if (base[i + 1])
		{
			j = i + 1;
			while (base[j] != '\0')
			{
				if (base[i] == base[j])
					return (0);
				j++;
			}
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(base);
	if (is_valid(base))
	{
		if (nbr == -2147483648)
		{
			ft_putchar('-');
			ft_putnbr_base(2147483648 / len, base);
			ft_putchar(base[2147483648 % len]);
		}
		else
		{
			if (nbr < 0)
			{
				ft_putchar('-');
				nbr = -nbr;
			}	
			if (nbr >= len)
				ft_putnbr_base(nbr / len, base);
			ft_putchar(base[nbr % len]);
		}
	}	
}

int main(void)
{
	ft_putnbr_base(452, "0123456789abcdef");
}
