/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvictor- <jvictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 20:51:25 by jvictor-          #+#    #+#             */
/*   Updated: 2021/06/12 11:10:14 by jvictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned int	s_len;
	char			*substr;

	i = 0;
	s_len = ft_strlen((char *)s);
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (0);
	if (!s)
		return(0);
	if (s_len <= start)
		return (substr);
	while (s[start] && len > i)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
