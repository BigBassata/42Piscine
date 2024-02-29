/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:56:56 by licohen           #+#    #+#             */
/*   Updated: 2024/02/19 22:12:17 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	len++;
	return (len);
}

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

#include <stdio.h>
int main()
{
	char src[] = "Un petit test des familles";
	char dest[sizeof(src)];
	int len;

	len = ft_strlen(src);
	ft_strlcpy(dest, src, sizeof(dest));
    printf("%s\n", dest);
    printf("%u\n", len);
	return (0);
}
