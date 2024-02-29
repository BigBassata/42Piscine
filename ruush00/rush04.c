/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:29:00 by madamou           #+#    #+#             */
/*   Updated: 2024/02/11 17:03:20 by julombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	display_x_lines(int x, int y, int w, int h)
{
	if (w == 0 && h == 0)
		ft_putchar('A');
	else if (w == x - 1 && h == 0)
		ft_putchar('C');
	else if ((w == 0 && h == y - 1))
		ft_putchar('C');
	else if ((w == x - 1 && h == y - 1))
		ft_putchar('A');
	else if ((w > 0 && w < x - 1) && (h == 0 || h == y - 1))
		ft_putchar('B');
}

void	display_y_lines(int x, int y, int w, int h)
{
	if ((w == 0 || w == x - 1) && (h > 0 && h < y - 1))
		ft_putchar('B');
	else if ((w > 0 && w < x - 1) && (h > 0 && h < y - 1))
		ft_putchar(' ');
}

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
			display_x_lines(x, y, w, h);
			display_y_lines(x, y, w, h);
			w++;
		}
		ft_putchar('\n');
		h++;
	}
}
