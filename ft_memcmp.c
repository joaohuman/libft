/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvictor- <jvictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 21:27:13 by jvictor-          #+#    #+#             */
/*   Updated: 2021/06/11 23:14:04 by jvictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_cast;
	unsigned char	*s2_cast;

	s1_cast = (unsigned char *)s1;
	s2_cast = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (*s1_cast != *s2_cast)
			return (*s1_cast - *s2_cast);
		s1_cast++;
		s2_cast++;
	}
	return (0);
}
