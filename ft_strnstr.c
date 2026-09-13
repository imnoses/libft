/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: spuschma <spuschma@student.42vienna.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/13 21:11:38 by spuschma         #+#    #+#              */
/*   Updated: 2026/09/13 21:20:40 by spuschma        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l_size;
	size_t	j;

	if (len == 0)
		return ((char *)big);
	i = 0;
	l_size = ft_strlen(little);
	while (i + l_size < len)
	{
		j = 0;
		while (big[i + j] == little[j] && j < l_size - 1)
			j++;
		if (j == l_size - 1)
			return ((char *)big + i);
	}
	return (NULL);
}
