/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrenz <nrenz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:58:48 by nrenz             #+#    #+#             */
/*   Updated: 2022/02/02 16:33:52 by nrenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

int	ft_format(va_list args, const char format)
{
	int	print_length;

	print_length = 0;
	if (format == 'c')
		print_length += ft_print_char(va_arg(args, int));
	else if (format == 's')
		print_length += ft_print_str(va_arg(args, char));
	else if (format == 'p')
		print_length += ft_print_pnt(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_length += ft_print_dori(va_arg(args, int));
	else if (format == 'u')
		print_length += ft_print_unsnbr(va_arg(args, unsigned int));
	if (format == 'x' || format == 'X')
		print_length += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_length += ft_print_perc();
	return (print_length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		print_length;
	va_list	args;

	i = 0;
	print_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_length += ft_format(args, str[i + 1]);
			i++;
		}
		else
			print_length += ft_print_char(str[i]);
			i++;
	}
	va_end(args);
	return (print_length);
}

// int	main(void)
// {
// 	int	number;

// 	number = 700;
// 	ft_printf("%x\n", number);
// 	return (0);
// }

int main()
{
	int d = 200;
	char str[20] = "hallo, welt";
	unsigned int u = 0 - 1;
	int *ptr = &d;
	ft_printf("d = %d\nstr = %s\nu = %u\nptr = %p\nx = %x\nX = %X\n",
	 d, str, u, ptr, d, d);
	return (0);
}
