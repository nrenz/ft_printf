/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrenz <nrenz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:35:12 by nrenz             #+#    #+#             */
/*   Updated: 2022/02/02 17:04:34 by nrenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

ssize_t	ft_print_str(char *str)
{
	return (write(1, str, strlen(str)));
}

int	main(void)
{
	char	str[] = "Hello";

	ft_print_str(str);
	return (0);
}
