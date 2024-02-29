/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tableau.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaigle <rlaigle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 12:51:14 by rlaigle           #+#    #+#             */
/*   Updated: 2024/02/18 22:31:01 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ex00.h"

int	**guide_tab(int *str, int **grille, int size)
{
	int	k;

	k = 0;
	while (k <= (size - 1))
	{
		grille[0][k + 1] = str[k];
		k++;
	}
	while (k <= (2 * size - 1))
	{
		grille[size + 1][k - (size - 1)] = str[k];
		k++;
	}
	while (k <= (3 * size - 1))
	{
		grille[k - (2 * size - 1)][0] = str[k];
		k++;
	}
	while (k <= (4 * size - 1))
	{
		grille[k - (3 * size - 1)][size + 1] = str[k];
		k++;
	}
	return (grille);
}

void	ft_quatre_ligne(int **grille, int j, int i, int size)
{
	int	k;

	if (j == 0)
	{
		while (j < size)
		{
			grille[j + 1][i] = j + 1;
			j++;
		}
	}
	if (j == (size + 1))
	{
		k = 1;
		while (j > 1)
		{
			grille[j - 1][i] = k;
			j--;
			k++;
		}
	}
}

void	ft_quatre_colonne(int **grille, int j, int i, int size)
{
	int	k;

	if (i == 0)
	{
		while (i < size)
		{
			grille[j][i + 1] = i + 1;
			i++;
		}
	}
	if (i == (size + 1))
	{
		k = 1;
		while (i > 1)
		{
			grille[j][i - 1] = k;
			i--;
			k++;
		}
	}
}

int	**cas_faciles(int **grille, int j, int i, int size)
{
	j = 0;
	while (j <= (size + 1))
	{
		i = 0;
		while (i <= (size + 1))
		{
			if (grille[j][i] == 1 && j == 0)
				grille[j + 1][i] = size;
			if (grille[j][i] == 1 && j == (size + 1))
				grille[j - 1][i] = size;
			if (grille[j][i] == 1 && i == 0)
				grille[j][i + 1] = size;
			if (grille[j][i] == 1 && i == (size + 1))
				grille[j][i - 1] = size;
			if (grille[j][i] == size && (j == 0 || j == (size + 1)))
				ft_quatre_ligne(grille, j, i, size);
			if (grille[j][i] == size && (i == 0 || i == (size + 1)))
				ft_quatre_colonne(grille, j, i, size);
			i++;
		}
		j++;
	}
	return (grille);
}

int	**tableau(int *str, int size)
{
	int	**grille;
	int	i;
	int	j;

	grille = malloc((size + 2) * sizeof(int *));
	i = 0;
	while (i < (size + 2))
	{
		grille[i] = malloc((size + 2) * sizeof(int));
		i++;
	}
	j = 0;
	while (j < (size + 2))
	{
		i = 0;
		while (i < (size + 2))
		{
			grille[j][i] = 0;
			i++;
		}
		j++;
	}
	grille = guide_tab(str, grille, size);
	grille = cas_faciles(grille, j, i, size);
	return (grille);
}

/*int	main (void)
{
	int	**grille;
	int	i;
	int	j;
	int size;
	size = 8;
	int str[]= {1,2,3,3,4,2,1,3,2,1,1,2,2,4,3,1,4,4,5,4,5,1,2,3,2,4,2,3,8,1,8,1};
	grille = tableau(str, size);

	i = 0;
	j = 0;	
	while (j < (size + 2))
	{
		i = 0;
		while (i < (size + 2))
		{
			printf("%d", grille[j][i]);
			i++;
		}
		printf("\n");
		j++;
	}
	i = (size + 1);
	while (i >= 0)
	{
		free(grille[i]);
		i--;
	}
	free(grille);
	return (0);
}*/
