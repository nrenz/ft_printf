/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_perc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrenz <nrenz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:40:43 by nrenz             #+#    #+#             */
/*   Updated: 2022/02/01 11:09:05 by nrenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

ssize_t	ft_print_perc(void)
{
	write(1, "%", 1);
	return (1);
}

int	main(void)
{
	ft_print_perc();
}
