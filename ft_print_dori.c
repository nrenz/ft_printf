/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dori.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrenz <nrenz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:30:22 by nrenz             #+#    #+#             */
/*   Updated: 2022/02/02 17:04:08 by nrenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_print_dori(int nbr)
{
	char	*res;
	int		len;

	res = ft_itoa(nbr);
	ft_putstr_fd(res, 1);
	len = ft_strlen(res);
	free(res);
	return (len);
}

int	main()
{
	long	n = -2000000;
	int		len;

	len = ft_print_dori(n);
	printf("%i\n", len);
	return (0);
}
