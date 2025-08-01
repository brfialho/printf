/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:34:49 by brfialho          #+#    #+#             */
/*   Updated: 2025/07/28 23:43:16 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putptr(void *p);
int	ft_putstr(char *s);
int	ft_put(char c, void *s);
int	ft_instr(char *s, char c);
int	ft_printf(const char *s, ...);
int	count_digits(int n, int base);
int	ft_put_n(int n, char *base, int len);
int	count_long(unsigned long n, int base);
int	count_unsigned(unsigned int n, int base);
int	ft_put_un(unsigned int n, char *base, int len);
int	ft_put_ul(unsigned long n, char *base, int len);

#endif