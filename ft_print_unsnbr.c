/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsnbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrenz <nrenz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:40:52 by nrenz             #+#    #+#             */
/*   Updated: 2022/02/02 14:10:15 by nrenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

ssize_t	ft_print_unsnbr(long int nbr)
{
	write(1, &nbr, 1);
	return (nbr);
}

int	main(void)
{
	long int	nbr = 0 - 1;
	ft_print_unsnbr(nbr);
	return (0);
}
