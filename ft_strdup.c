/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvictor- <jvictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 22:48:31 by jvictor-          #+#    #+#             */
/*   Updated: 2021/06/12 10:09:53 by jvictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*duplicated;

	size = ft_strlen((char *)s) + 1;
	duplicated = (char *)malloc(size);
	if (!duplicated)
		return (0);
	if (!s)
		return (0);
	ft_strlcpy(duplicated, s, size);
	return (duplicated);
}
