/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:41:03 by tshigena          #+#    #+#             */
/*   Updated: 2021/11/02 21:54:53 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;

	dst_len = ft_strlen(dst);
	if (dst_len < dstsize)
		ft_strlcpy(&dst[dst_len], src, dstsize - dst_len);
	else
		dst_len = dstsize;
	return (dst_len + ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	int i = 100;
// 	char a[20] = {"aaaaa"};
// 	char c[20] = {"aaaaa"};
// 	char b[20] = {"zzz"};
// 	char d[20] = {"zzz"};
// 	// strcpy(a,b);
// 	printf("%zu\n",ft_strlcat(a,b, i));
// 	printf("%lu\n",strlcat(c,d, i));
// 	// printf("%s\n",a);
// 	// printf("%s\n",c);
// 	write(1,a,10);
// 	printf("\n");
// 	write(1,c,10);
// 	// char *v = ft_strcat(a,b);
// 	// printf("%s\n",v); 
// 	return 0;  
// }
