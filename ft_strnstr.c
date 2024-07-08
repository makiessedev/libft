/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 08:48:56 by mmorais           #+#    #+#             */
/*   Updated: 2024/07/08 13:21:23 by mmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[i] && i < (int)len)
	{
		if (haystack[i] == needle[j])
		{
			while (needle[j] && haystack[i] == needle[j] && i < (int)len)
			{
				j++;
				i++;
			}
			if (j == (int)ft_strlen(needle))
				return ((char *)haystack + i - ft_strlen(needle));
			j = 0;
		}
		i++;
	}
	return (NULL);
}
