/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*																			  */
/*   Created: 2024/02/14 19:16:37 by licohen           #+#    #+#             */
/*   Updated: 2024/02/14 20:46:36 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
			a = 1;
		else if (str[i - 1] >= '0' && str[i - 1] <= '9')
			a = 1;
		else if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			a = 1;
		else
			a = 0;
		if (str[i] >= 'A' && str[i] <= 'Z' && a == 1)
			str[i] = str[i] + 32;
		if (str[i] >= 'a' && str[i] <= 'z' && a == 0)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
	char a[] = "salut, coMMent TU Vas ? 42mots quaRante-deux; cinquante+Et+Un";
	printf("%s\n", ft_strcapitalize(a));
	return(0);
}*/
