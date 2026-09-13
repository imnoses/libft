/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   string_theory.c                                   :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: spuschma <spuschma@student.42vienna.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/13 12:59:01 by spuschma         #+#    #+#              */
/*   Updated: 2026/09/13 14:12:52 by spuschma        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = -1;
	while (s[++i])
		;
	return (i);
}

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*c;

	c = s;
	i = -1;
	while (++i < n)
	{
		c[i] = 0;
	}
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	if (!src || !dest)
		return (NULL);
	s = src;
	d = dest;
	i = -1;
	while (++i < n)
		d[i] = s[i];
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	if (!src || !dest)
		return (NULL);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	s = src;
	d = dest;
	while (n--)
		d[n] = s[n];
	return (dest);
}
