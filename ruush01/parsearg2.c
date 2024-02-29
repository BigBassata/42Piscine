/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsearg2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 19:37:53 by licohen           #+#    #+#             */
/*   Updated: 2024/02/18 22:24:31 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ex00.h"

int	strsize(char *str)
{
	int	i;
	int	len;
	int	size;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			len++;
		i++;
	}
	if (len % 4 != 0)
		return (0);
	size = len / 4;
	return (size);
}

int	*set_list(char *str, int *tab)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (str[j] != '\0')
	{
		if ((str[j] >= '0' && str[j] <= '9') && str[j - 1] == ' ')
		{
			tab[i] = str[j] - '0';
			i++;
			j++;
		}
		else if (str[j] == ' ' && (str[j - 1] >= '0' && str[j - 1] <= '9'))
			j++;
		else
		{
			free(tab);
			return (0);
		}
	}
	return (tab);
}

int	*parse_arg(char *str, int size)
{
	int	*tab;

	tab = malloc(4 * size * sizeof(int));
	if (!tab)
	{
		free(tab);
		return (0);
	}
	if ((*str >= '0') && (*str <= '9'))
		tab[0] = *str - '0';
	else
	{
		free(tab);
		return (0);
	}
	tab = set_list(str, tab);
	if (tab && !test_contraintes(tab, size))
	{
		free(tab);
		return (0);
	}
	return (tab);
}

int	test_contraintes(int *tab, int size)
{
	int	i;
	int	comp;

	i = 0;
	while (i < size)
	{
		comp = tab[i] + tab[i + size];
		if (comp <= 2 || comp > (size + 1))
			return (0);
		comp = tab[i + (2 * size)] + tab[i + (3 * size)];
		if (comp <= 2 || comp > (size + 1))
			return (0);
		i++;
	}	
	return (1);
}

/*int	main(int argc, char **argv)
{
	int i;
	int recupsize;
	int *tab;
	char *str;
	
	i = 0;
	if (argc != 2)
	{
		printf("mauvais nombre d'arguments");
		ft_print_error();
		return(-1);
	}
	str = argv[1];
	recupsize = strsize(str);
	tab = parse_arg(str, recupsize);

	i = 0;
	if (tab)
	{
		printf("\n");
		while (i < 4 * recupsize)
		{
			printf(" %d ", tab[i]);
			i++;
		}
		printf("\n");
		free(tab);
	}
	return (0);
}*/
