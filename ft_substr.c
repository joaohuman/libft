/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvictor- <jvictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 20:51:25 by jvictor-          #+#    #+#             */
/*   Updated: 2021/06/12 13:05:03 by jvictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned int	s_len;
	char			*substr;

	if (!s)
		return (0);
	i = 0;
	s_len = ft_strlen(s);
	if (s_len < start)
	{
		substr = (char *)ft_calloc(sizeof(char), 1);
		if (!substr)
			return (0);
		return (substr);
	}
	substr = (char *)ft_calloc(sizeof(char), (s_len + 1));
	if (!substr)
		return (0);
	while (s[start] && len > i)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	return (substr);
}
