/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:34:11 by licohen           #+#    #+#             */
/*   Updated: 2024/02/13 16:40:33 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y);

int	main(void)
{	
	rush(100, 5);
	ft_putchar('\n');
	rush(1, 1);
	ft_putchar('\n');
	rush(1, 5);
	ft_putchar('\n');
	rush(4, 4);
	ft_putchar('\n');
	rush(5, 3);
	ft_putchar('\n');
	rush(1, 2);
	ft_putchar('\n');
	rush(2, 2);
	ft_putchar('\n');
	rush(3, 2);
	ft_putchar('\n');
	return (0);
}
