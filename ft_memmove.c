/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 08:47:09 by mmorais           #+#    #+#             */
/*   Updated: 2024/07/08 08:47:13 by mmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest_ptr;
	char	*src_ptr;

	i = 0;
	dest_ptr = (char *)dest;
	src_ptr = (char *)src;
	if (!dest || !src)
		return (0);
	if (dest > src)
	{
		i = ((int)n) - 1;
		while (i > 0)
		{
			*(dest_ptr + i) = *(src_ptr + i);
			i--;
		}
		return (dest);
	}
	dest_ptr = ft_memcpy(dest, src, n);
	return (dest);
}
