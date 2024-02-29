/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:23:38 by licohen           #+#    #+#             */
/*   Updated: 2024/02/18 21:53:36 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_H
# define EX00_H
# include <unistd.h>
# include <stdlib.h>

int		recursive_find(int **tab, int *priority, int size);
int		strsize(char *str);
int		*parse_arg(char *str, int size);
int		*priority(int **tab, int size);
int		**tableau(int *str, int size);
int		count_hor(int **tab, int index, int direction, int size);
int		count_vert(int **tab, int index, int direction, int size);
int		already_used(int **tab, int index, int size);
int		is_valid(int **tab, int index, int size);
void	ft_print(int **tab, int size);
void	ft_print_error(void);
int		test_contraintes(int *tab, int size);
int		*set_list(char *str, int *tab);
void	sort_priority(int *priority, int *index, int size);
int		find_max(int *index, int size);
int		*fill_index(int *index, int idx, int **tab, int size);
int		*init_priority(int **tab, int size);
int		**guide_tab(int *str, int **grille, int size);
void	ft_quatre_ligne(int **grille, int j, int i, int size);
void	ft_quatre_colonne(int **grille, int j, int i, int size);
int		**cas_faciles(int **grille, int j, int i, int size);

#endif
