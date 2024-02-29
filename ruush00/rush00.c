/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:35:19 by licohen           #+#    #+#             */
/*   Updated: 2024/02/11 16:06:18 by julombar         ###   ########.fr       */
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
			if ((w == 0 && h == 0) || (w == 0 && h == y -1)
				|| (w == x - 1 && h == 0) || (w == x - 1 && h == y - 1))
				ft_putchar('o');
			else if ((w == 0 || w == x - 1) && (h > 0 || h < y - 1))
				ft_putchar('|');
			else if ((w > 0 && w < x - 1) && (h > 0 && h < y - 1))
				ft_putchar(' ');
			else if ((w > 0 && w < x - 1) && (h == 0 || h == y - 1))
				ft_putchar('-');
			w++;
		}
		ft_putchar('\n');
		h++;
	}
}
