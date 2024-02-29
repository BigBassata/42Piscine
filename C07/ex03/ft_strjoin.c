/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:24:07 by licohen           #+#    #+#             */
/*   Updated: 2024/02/28 16:30:02 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_big_strlen(int size, char *sep, char **str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] && i < size)
	{
		len += ft_strlen(str[i]);
		if (i < size - 1)
			len += ft_strlen(sep);
		i++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*dest;

	if (sep == NULL)
		sep = "";
	if (size == 0)
	{
		dest = (char *)malloc(sizeof(char));
		dest[0] = '\0';
		return (dest);
	}
	dest = (char *)malloc(sizeof(char) * (ft_big_strlen(size, sep, strs) + 1));
	if (!dest)
		return (NULL);
	dest[0] = '\0';
	i = 0;
	while (i < size && strs[i])
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}
/*
int main(void)
{   
    char *strs[] = {"hola", "como", "estas"};
    int size = 3;
    char sep[] = "..";
    printf("%s\n", ft_strjoin(size, strs, sep));
    free(ft_strjoin(size, strs, sep));
    return (0);
}*/
