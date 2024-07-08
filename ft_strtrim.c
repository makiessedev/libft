/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 08:36:51 by mmorais           #+#    #+#             */
/*   Updated: 2024/07/08 08:37:02 by mmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_remove_init(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	set_len;
	int	count;

	i = 0;
	j = 0;
	set_len = ft_strlen(set);
	count = 0;
	while (s1[i] == set[j])
	{
		i++;
		j++;
		if (j == (int)ft_strlen(set))
		{
			j = 0;
			count += set_len;
		}
	}
	return (count);
}

static int	ft_remove_end(char const *s1, char const *set)
{
	int	set_len;
	int	s1_len;
	int	count;

	set_len = ft_strlen(set);
	s1_len = ft_strlen(s1);
	count = 0;
	while (s1[s1_len - 1] == set[set_len - 1])
	{
		s1_len--;
		set_len--;
		if (set_len == 0)
		{
			set_len = ft_strlen(set);
			count += set_len;
		}
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		str_len;
	int		remove_init;
	int		remove_end;
	int		i;
	char	*str;

	remove_init = ft_remove_init(s1, set);
	remove_end = ft_remove_end(s1, set);
	str_len = ft_strlen(s1) - (remove_init + remove_end);
	str = (char *)malloc(str_len * sizeof(char) + 1);
	i = 0;
	while (s1[remove_init + i])
	{
		str[i] = s1[remove_init + i];
		i++;
	}
	if (remove_end == 0 && remove_init > 0)
		str[i] = '\0';
	while (remove_end + 1 > 0)
	{
		str[i] = '\0';
		i--;
		remove_end--;
	}
	return (str);
}
