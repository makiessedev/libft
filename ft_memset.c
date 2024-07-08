/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 08:52:01 by mmorais           #+#    #+#             */
/*   Updated: 2024/07/08 08:52:05 by mmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*to_fill;
	size_t	i;

	to_fill = (char *)s;
	i = 0;
	while (i < n)
	{
		to_fill[i] = c;
		i++;
	}
	return (to_fill);
}
