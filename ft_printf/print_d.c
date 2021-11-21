/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 22:54:50 by tshigena          #+#    #+#             */
/*   Updated: 2021/11/06 01:41:17 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	print_d(int d)
{
	char	*str_num;
	size_t	size;

	str_num = ft_itoa(d);
	ft_putstr_fd(str_num, 1);
	size = ft_strlen(str_num);
	free(str_num);
	return (size);
}
