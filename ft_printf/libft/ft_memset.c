/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:40:11 by tshigena          #+#    #+#             */
/*   Updated: 2021/11/02 21:59:39 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void *ft_memset(void *buf, int ch, size_t n);
// int	main(void)
// {
// 	char str[] = "012345678900000";
// 	char str2[] = "012345678900000";
//         // memset(str+2, '*', 8);
//         // ft_memset(str2+2, '*', 8);
//         // printf("%s\n",str);

// 		memset(str, 't' + 256, 1);
// 		ft_memset(str2, 't' + 256, 1);
//         printf("%s\n",str);
//         printf("%s\n",str2);
// 	return (0);
// }

void	*ft_memset(void *buf, int ch, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)buf)[i] = ch;
		i++;
	}
	return (buf);
}
