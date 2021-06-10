/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvictor- <jvictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:19:13 by jvictor-          #+#    #+#             */
/*   Updated: 2021/06/04 20:33:58 by jvictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*dest_cast;
	char	*src_cast;
	int		i;

	dest_cast = (char *)dest;
	src_cast = (char *)src;
	i = 0;
	while (n--)
	{
		dest_cast[i] = src_cast[i];
		if (src_cast[i] == c)
			return (dest + i + 1);
		i++;
	}
	return (0);
}
