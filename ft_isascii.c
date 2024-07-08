/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 08:44:32 by mmorais           #+#    #+#             */
/*   Updated: 2024/07/08 08:44:36 by mmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
