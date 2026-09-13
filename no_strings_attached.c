/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   no_strings_attached.c                             :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: spuschma <spuschma@student.42vienna.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/13 14:24:33 by spuschma         #+#    #+#              */
/*   Updated: 2026/09/13 14:30:21 by spuschma        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = -1;
	while (++i < size - 1 && src[i])
		dst[i] = src[i];
	while (++i < size)
		dst[i] = 0;
	return (ft_strlen(src));
}
