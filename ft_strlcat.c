/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvictor- <jvictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 22:35:49 by jvictor-          #+#    #+#             */
/*   Updated: 2021/06/03 20:55:10 by jvictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (dest[len] && len < size)
		len++;
	i = len;
	while (src[len - i] && (len + 1) < size)
	{
		dest[len] = src[len - i];
		len++;
	}
	if (i < size)
		dest[len] = '\0';
	return (i + ft_strlen(src));
}
