/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pnt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrenz <nrenz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:40:47 by nrenz             #+#    #+#             */
/*   Updated: 2022/02/04 16:12:27 by nrenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pnt(unsigned long long nbr)
{
	int	len;

	len = write(1, "0x", 2);
	len += ft_print_hex(nbr, 'x');
	return (len);
}
