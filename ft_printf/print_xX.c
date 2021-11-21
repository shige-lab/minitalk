/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_xX.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:29:41 by tshigena          #+#    #+#             */
/*   Updated: 2021/11/06 01:47:01 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	print_x(int c, unsigned int u)
{
	char	*str_num;
	size_t	size;
	size_t	i;

	i = 0;
	str_num = ft_itoa_dx(u, 16);
	if (c == 'X')
	{
		while (str_num[i])
		{
			str_num[i] = ft_toupper(str_num[i]);
			i++;
		}
	}
	ft_putstr_fd(str_num, 1);
	size = ft_strlen(str_num);
	free(str_num);
	return (size);
}
