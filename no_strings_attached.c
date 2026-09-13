/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   no_strings_attached.c                             :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: spuschma <spuschma@student.42vienna.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/13 14:24:33 by spuschma         #+#    #+#              */
/*   Updated: 2026/09/13 15:04:28 by spuschma        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = -1;
	while (++i + 1 < size && src[i])
		dst[i] = src[i];
	while (i < size)
		dst[i++] = 0;
	return (ft_strlen(src));
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;

	dst_size = -1;
	while (++dst_size < size && dst[dst_size])
		;
	return (dst_size + ft_strlcpy(dst + dst_size, src, size - dst_size));
}
