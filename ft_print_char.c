/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrenz <nrenz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:21:51 by nrenz             #+#    #+#             */
/*   Updated: 2022/02/02 13:48:57 by nrenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

ssize_t	ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

// int	main(void)
// {
// 	char	c;

// 	c = 'a';
// 	ft_print_char(c);
// 	return (0);
// }
