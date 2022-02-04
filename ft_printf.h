/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrenz <nrenz@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:28:27 by nrenz             #+#    #+#             */
/*   Updated: 2022/02/04 16:08:15 by nrenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include "libft.h"

int				ft_printf(const char *str, ...);
int				ft_print_str(char *str);
int				ft_print_char(int c);
int				ft_print_perc(void);
int				ft_print_dori(int number);
int				ft_print_unsnbr(unsigned int u);
int				ft_print_pnt(unsigned long long ptr);
int				ft_print_hex(unsigned long long nbr, const char format);
char			*ft_unsigned_itoa(unsigned int n);

#endif