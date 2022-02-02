/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrenz <nrenz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:40:34 by nrenz             #+#    #+#             */
/*   Updated: 2022/02/02 16:33:40 by nrenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
// #include "printf.h"
#include "libft.h"

int	ft_put_hex(unsigned int nbr, const char format)
{
	if (nbr >= 16)
	{
		ft_put_hex (nbr / 16, format);
		ft_put_hex (nbr % 16, format);
	}
	else
	{
		if (nbr <= 9)
			ft_putchar_fd((nbr + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((nbr - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((nbr - 10 + 'A'), 1);
		}
	}
	return (nbr);
}

int	ft_hexlen(unsigned int nbr)
{
	int	len;

	len = 0;
	while (nbr != 0)
	{
		len++;
		nbr = nbr / 16;
	}
	return (len);
}

ssize_t	ft_print_hex(unsigned int nbr, const char format)
{
	if (nbr == 0)
		return (write(1, "0", 1));
	else
		ft_put_hex(nbr, format);
	return (ft_hexlen(nbr));
}

int	main(void)
{
	int	nbr;
	int	res;

	nbr = 4326;
	res = ft_print_hex(nbr, 'x');
	return (0);
}
