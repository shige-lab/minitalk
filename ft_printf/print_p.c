/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:29:29 by tshigena          #+#    #+#             */
/*   Updated: 2021/11/07 21:45:17 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	print_p(unsigned long p)
{
	char	*str_num;
	size_t	size;

	str_num = ft_itoa_dx(p, 16);
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(str_num, 1);
	size = ft_strlen(str_num) + 2;
	free(str_num);
	return (size);
}
