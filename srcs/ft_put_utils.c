/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 23:25:14 by brfialho          #+#    #+#             */
/*   Updated: 2025/07/30 01:46:57 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	ft_putstr(char *s)
{
	int	count;

	if (!s)
		return (write(1, "(null)", 6));
	count = 0 ;
	while (s[count])
		write(1, &s[count++], 1);
	return (count);
}

int	ft_putptr(void *p)
{
	if (!p)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	return (2 + ft_put_ul((unsigned long)p, "0123456789abcdef", 16));
}

int	ft_put(char c, void *s)
{
	if (c == 'c' || c == '%')
		return (write(1, &s, 1));
	if (c == 's')
		return (ft_putstr((char *)s));
	if (c == 'p')
		return (ft_putptr(s));
	if (ft_instr("id", c))
		return (ft_put_n((int)(long)s, "0123456789", 10));
	if (c == 'u')
		return (ft_put_un((unsigned int)(unsigned long)s, "0123456789", 10));
	if (c == 'x')
		return (ft_put_un((unsigned long)s, "0123456789abcdef", 16));
	return (ft_put_un((unsigned long)s, "0123456789ABCDEF", 16));
}
