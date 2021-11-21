/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 01:44:33 by tshigena          #+#    #+#             */
/*   Updated: 2021/11/06 01:44:34 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	print_u(unsigned int u)
{
	char	*str_num;
	size_t	size;

	str_num = ft_itoa_dx(u, 10);
	ft_putstr_fd(str_num, 1);
	size = ft_strlen(str_num);
	free(str_num);
	return (size);
}
