/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 08:37:49 by mmorais           #+#    #+#             */
/*   Updated: 2024/07/08 08:41:58 by mmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	int		i;
	char	*str;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = malloc((s1_len + s2_len) * sizeof(char) + 1);
	i = 0;
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, s1_len + 1);
	while (s2[i])
	{
		str[i + s1_len] = s2[i];
		i++;
	}
	str[s1_len + s2_len] = '\0';
	return (str);
}
