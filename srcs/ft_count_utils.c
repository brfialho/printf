/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:57:47 by brfialho          #+#    #+#             */
/*   Updated: 2025/07/28 23:40:40 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	count_digits(int n, int base)
{
	int	count;

	count = 1;
	if (n < 0 && count++)
		n *= -1;
	while (n / base && count++)
		n = n / base;
	return (count);
}

int	count_unsigned(unsigned int n, int base)
{
	int	count;

	count = 1;
	while (n / base && count++)
		n = n / base;
	return (count);
}

int	count_long(unsigned long n, int base)
{
	int	count;

	count = 1;
	while (n / base && count++)
		n = n / base;
	return (count);
}

int	ft_instr(char *s, char c)
{
	while (*s)
		if (c == *s++)
			return (1);
	return (0);
}
