/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rribette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:50:33 by rribette          #+#    #+#             */
/*   Updated: 2024/02/18 22:28:42 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ex00.h"

int	main(int argc, char *argv[])
{
	int	*list_tab;
	int	size;
	int	**grille;

	size = 0;
	if (argc == 2)
		size = strsize(argv[1]);
		list_tab = parse_arg(argv[1], size);
	if (size && list_tab)
	{
		grille = tableau(list_tab, size);
		free(list_tab);
		list_tab = priority(grille, size);
		if (recursive_find(grille, list_tab, size))
			ft_print(grille, size);
		free(list_tab);
		while (size + 2 > 0)
			free(grille[--size + 2]);
		free(grille);
	}
	else
		ft_print_error();
	return (0);
}
