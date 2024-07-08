/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 08:52:34 by mmorais           #+#    #+#             */
/*   Updated: 2024/07/08 08:52:38 by mmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	s_len = ft_strlen(s);
	while (s[s_len - 1] != '\0')
	{
		if (s[s_len - 1] == (char)c)
			return ((char *)(s + s_len - 1));
		s_len--;
	}
	return (NULL);
}
