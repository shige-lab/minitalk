/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:37:33 by tshigena          #+#    #+#             */
/*   Updated: 2021/10/28 16:18:21 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void ft_bzero(void *buf, size_t n);
// int	main(void)
// {
// 	char str[] = "012345678900000";
// 	char str2[] = "012345678900000";
//         bzero(str+2, 1);
//         ft_bzero(str2+2, 1);
//         // bzero(str+2, 8);
//         // ft_bzero(str2+2, 8);
//         printf("%s\n",str);
//         printf("%s\n",str2);
//         bzero(NULL, 8);
//         printf("bzero\n");
//         ft_bzero(NULL, 8);
//         printf("ft\n");
// 	return (0);
// }

void	ft_bzero(void *buf, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)buf)[i] = '\0';
		i++;
	}
	return ;
}
