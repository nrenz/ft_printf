/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dori.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrenz <nrenz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:30:22 by nrenz             #+#    #+#             */
/*   Updated: 2022/02/04 14:58:44 by nrenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_dori(int nbr)
{
	char	*res;
	int		len;

	res = ft_itoa(nbr);
	if (!res)
		return (0);
	ft_putstr_fd(res, 1);
	len = ft_strlen(res);
	free(res);
	return (len);
}
