/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   string_theory.c                                   :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: spuschma <spuschma@student.42vienna.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/13 12:59:01 by spuschma         #+#    #+#              */
/*   Updated: 2026/09/13 13:16:20 by spuschma        ###   ########.fr        */
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
