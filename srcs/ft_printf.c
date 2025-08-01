/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 22:40:19 by brfialho          #+#    #+#             */
/*   Updated: 2025/07/30 01:44:06 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	argv;
	int		count;

	count = 0;
	va_start(argv, s);
	while (*s)
	{
		if (*s == '%' && ft_instr("cspdiuxX", *++s))
			count += ft_put(*s++, va_arg(argv, void *));
		else
			count += write(1, s++, 1);
	}
	va_end(argv);
	return (count);
}
// #include <stdio.h>
// #include <limits.h>
// int main(void)
// {
// }
