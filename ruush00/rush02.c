/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:29:00 by madamou           #+#    #+#             */
/*   Updated: 2024/02/11 17:05:01 by julombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	w;
	int	h;

	h = 0;
	while (h < y)
	{
		w = 0;
		while (w < x)
		{
			if ((w == 0 && h == 0) || (w == x - 1 && h == 0))
				ft_putchar('A');
			if (((w == 0 && h == y -1) || (w == x - 1 && h == y - 1)))
				ft_putchar('C');
			else if ((w == 0 || w == x - 1) && (h > 0 && h < y - 1))
				ft_putchar('B');
			else if ((w > 0 && w < x - 1) && (h > 0 && h < y - 1))
				ft_putchar(' ');
			else if ((w > 0 && w < x - 1) && (h == 0 || h == y - 1))
				ft_putchar('B');
			w++;
		}
		ft_putchar('\n');
		h++;
	}
}
