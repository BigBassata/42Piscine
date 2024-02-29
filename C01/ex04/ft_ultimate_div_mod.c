/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:35:14 by licohen           #+#    #+#             */
/*   Updated: 2024/02/12 21:27:08 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{	
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
#include <stdio.h> 

int main()
{
	int a;
	int b;
	int *ptr1;
	int *ptr2;

	a = 847;
	b = 23;
	ptr1 = &a;
	ptr2 = &b; 
	ft_ultimate_div_mod(ptr1, ptr2);
	printf("%d\n", a);
	printf("%d\n", b);
	return(0);
}*/
