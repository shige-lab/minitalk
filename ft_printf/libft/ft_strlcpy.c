/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:41:07 by tshigena          #+#    #+#             */
/*   Updated: 2021/11/01 16:38:13 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i < dstsize)
	{
		if (src[i] == '\0' || dstsize == i + 1)
		{
			dst[i] = '\0';
			break ;
		}
		else
			dst[i] = src[i];
		i++;
	}
	return (ft_strlen(src));
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char a[10] = {"ss"};
// 	char i[10] = {"ss"};
// 	// char b[20] = {"n22222"};
// 	// char j[20] = {"n22222"};
// 	printf("%zu\n",ft_strlcpy(a, NULL, 0));
// 	printf("%zu\n",strlcpy(i, NULL,0));
// 	write (1, a,6);
// 	printf("\n");
// 	// printf("%s\n",i);
// 	write (1, i,6);
// 	return 0;
// }
