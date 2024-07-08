/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 08:46:11 by mmorais           #+#    #+#             */
/*   Updated: 2024/07/08 08:46:15 by mmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	signal;
	int	result;

	i = 0;
	signal = 1;
	result = 0;
	while (nptr[i] == ' ')
		i++;
	if (nptr[i] == '-')
	{
		signal = -1;
		i++;
	}
	if (nptr[i] == '+')
		i++;
	if (!ft_isdigit(nptr[i] - '0'))
		return (0);
	while (ft_isdigit(nptr[i] - '0'))
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return (result * signal);
}
