/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 07:51:12 by mmorais           #+#    #+#             */
/*   Updated: 2024/07/13 07:55:29 by mmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_digit_numbers(int n)
{
	int	counter;

	counter = 0;
	while (n)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	int		digit_numbers;
	int		num;
	char	*str_n;

	if (n == 0)
		return ("0");
	digit_numbers = ft_digit_numbers(n);
	num = n;
	str_n = malloc((digit_numbers + 1) * sizeof(char));
	if (!str_n)
		return (NULL);
	if (n < 0)
	{
		num *= -1;
		digit_numbers++;
	}
	str_n[digit_numbers] = '\0';
	while (digit_numbers--)
	{
		str_n[digit_numbers] = num % 10 + '0';
		num /= 10;
	}
	if (n < 0)
		str_n[0] = '-';
	return (str_n);
}
