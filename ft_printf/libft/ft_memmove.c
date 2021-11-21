/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:40:06 by tshigena          #+#    #+#             */
/*   Updated: 2021/10/27 20:54:00 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (n == 0 || dest == src)
		return (dest);
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (d > s)
	{
		i = n;
		while (i-- > 0)
			d[i] = s[i];
	}
	return (dest);
}

// int	main(void)
// {
// 	// char str[] =  "012345678900000";
// 	char str2[] = "012345678900000";
// 	// char a[] = "abc\0d";
//     // char b[] = "abc\0d";
// 	char *a = ft_memmove(str2 + 2, str2, 5);
// 	// char *b = memmove(str + 2, str, 5);
//         printf("%s\n",a);
//     //     printf("%s\n",b);
//     //     printf("%s\n",str2);
//         // printf("%s\n",str);
// 	return (0);
// }
