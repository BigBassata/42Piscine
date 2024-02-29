/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:15:30 by licohen           #+#    #+#             */
/*   Updated: 2024/02/13 16:56:35 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{	
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
#include <stdio.h> 

int main()
{	
	int u;
	int d;
	int *ptr;
	int *ptr1;

	u = 1;
	d = 3;
	
	ptr = &u; 
	ptr1 = &d; 

	ft_swap(ptr, ptr1);
	printf("%d, %d", u, d);
	return (0);
}*/
