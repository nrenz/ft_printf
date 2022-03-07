/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_itoa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrenz <nrenz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:17:10 by nrenz             #+#    #+#             */
/*   Updated: 2022/02/04 14:53:53 by nrenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static long long	ft_inttolong(unsigned int n)
{
	long long	long_n;

	long_n = (long long)n;
	if (long_n < 0)
	{
		long_n = long_n * -1;
	}
	return (long_n);
}

char	*ft_unsigned_itoa(unsigned int n)
{
	char		*p;
	int			i;
	int			j;
	char		c[15];
	long long	ln;

	ln = ft_inttolong(n);
	i = 0;
	while (ln > 0)
	{
		c[i++] = (ln % 10) + '0';
		ln = ln / 10;
	}
	if (n == 0)
		c[i++] = '0';
	if (n < 0)
		c[i++] = '-';
	p = ft_calloc((i + 1), sizeof(char));
	if (!p)
		return (NULL);
	j = 0;
	i = i - 1;
	while (i >= 0)
		p[j++] = c[i--];
	return (p);
}
