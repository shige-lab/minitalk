/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:35:34 by tshigena          #+#    #+#             */
/*   Updated: 2021/10/27 20:25:09 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memcpy(void *dest, const void *src, size_t n);
// int	main(void)
// {
// 	// char str[] = "012345678900000";
// 	// char str2[] = "012345678900000";
// 	// char a[] = "abc\0d";
//     // // char b[] = "abc\0d";
//     //     ft_memcpy(str2 +1, str2, 5);
//     //     memcpy(str, a, 5);
//     //     printf("%s\n",str);
//         // printf("%s\n",str2);
// 	char *str3 = (char *)calloc(11,sizeof(char));
// 	char *str4 = (char *)calloc(11,sizeof(char));
// 	char str5[10];
// 	for (int i=0; i < 10; i++)
// 		str5[i] = 140 + i;
//         printf("%s\n",(char *)memcpy(str3,str5,10));
//         printf("%s\n",(char *)ft_memcpy(str4,str5,10));
//         printf("%s\n",(char *)memcpy(NULL,NULL,3));
//         printf("%s\n",(char *)ft_memcpy(NULL,NULL,3));
// 	return (0);
// }

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0 || dest == src)
		return (dest);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
