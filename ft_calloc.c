/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 08:50:59 by mmorais           #+#    #+#             */
/*   Updated: 2024/07/08 08:51:02 by mmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buffer;

	if (size && nmemb > (UINT32_MAX / size))
		return (NULL);
	buffer = (void *)malloc(nmemb * size);
	if (buffer == NULL)
		return (NULL);
	ft_bzero(buffer, nmemb * size);
	return (buffer);
}
