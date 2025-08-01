/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 23:20:00 by brfialho          #+#    #+#             */
/*   Updated: 2025/07/28 23:41:08 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	ft_put_ul(unsigned long n, char *base, int len)
{
	if (n / len)
		ft_put_ul(n / len, base, len);
	write (1, &base[n % len], 1);
	return (count_long(n, len));
}

int	ft_put_un(unsigned int n, char *base, int len)
{
	if (n / len)
		ft_put_un(n / len, base, len);
	write (1, &base[n % len], 1);
	return (count_unsigned(n, len));
}

int	ft_put_n(int n, char *base, int len)
{
	int	count;

	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	count = count_digits(n, len);
	if (n < 0 && write(1, "-", 1))
		n *= -1;
	if (n / len)
		ft_put_n(n / len, base, len);
	write (1, &base[n % len], 1);
	return (count);
}
