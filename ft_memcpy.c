/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvictor- <jvictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 19:56:42 by jvictor-          #+#    #+#             */
/*   Updated: 2021/06/04 20:10:07 by jvictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest_cast;
	char	*src_a;
	int		i;

	dest_cast = (char *)dest;
	src_a = (char *)src;
	i = 0;
	while (n--)
	{
		dest_cast[i] = src_a[i];
		i++;
	}
	return (dest);
}
