/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pnt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrenz <nrenz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:40:47 by nrenz             #+#    #+#             */
/*   Updated: 2022/02/02 17:04:00 by nrenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

ssize_t	ft_print_pnt(void *pnt)
{
	ssize_t	*b;

	b = pnt;
	print_hex(&b);
	return (b);
}

int	main(void)
{
	int	pnt;

	pnt = 0;
	ft_print_pnt(pnt);
	return (0);
}
