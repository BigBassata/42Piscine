/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 22:41:22 by licohen           #+#    #+#             */
/*   Updated: 2024/02/27 22:01:18 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	str_len;

	str_len = 0;
	while (str[str_len] != '\0')
		str_len++;
	return (str_len);
}

int	is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	check_base(char *base)
{
	int	i;
	int	j;
	int	len_base;

	len_base = ft_strlen(base);
	if (len_base < 2)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if ((base[i] == '+' || base[i] == '-')
			|| (base[i] < 32 || base[i] > 126))
			return (0);
		j = i + 1;
		while (base[j] != '\0' && j < len_base)
		{
			if (base[i] == base [j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{	
	int	i;
	int	len_base;
	int	signe;
	int	resultat;

	len_base = ft_strlen(base);
	i = 0;
	signe = 1;
	resultat = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe *= (-1);
		i++;
	}
	i = 0;
	while (is_in_base(str[i], base) >= 0)
	{
		resultat = resultat * len_base + (is_in_base(str[i], base));
		i++;
	}
	return (resultat * signe);
}

#include <stdio.h>

int main(int argc, char **argv)
{
	(void) argc;
	printf("%d\n", ft_atoi_base(argv[1], argv[2]));
	return (0);
}
