/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:29:58 by tshigena          #+#    #+#             */
/*   Updated: 2021/11/07 21:46:32 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_PRINTF_H
# define _FT_PRINTF_H

# include "stdarg.h"
# include "stdlib.h"
# include <unistd.h>
# include <limits.h>
# include "libft/libft.h"


size_t	print_c(int c);
size_t	print_s(char *s);
size_t	print_d(int d);
size_t	print_u(unsigned int u);
size_t	print_p(unsigned long p);
size_t	print_x(int c, unsigned int u);
char	*ft_itoa_dx(unsigned long long n, int base);
int		ft_printf(const char *format, ...);

#endif