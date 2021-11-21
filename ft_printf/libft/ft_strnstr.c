/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:36:27 by tshigena          #+#    #+#             */
/*   Updated: 2021/11/01 17:11:50 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		needle_len;
	size_t		difference;

	i = 0;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == *needle)
		{
			difference = ft_memcmp(&haystack[i], needle, needle_len);
			if (difference == 0 && needle_len + i <= len)
				return (&((char *)haystack)[i]);
		}
		i++;
	}
	return (NULL);
}

// #include<stdio.h>
// #include<string.h>
// int	main(void)
// {
// 	// char *s1 = "MZIRIBMZIRIBMZE123";
// 	char *s2 = "MZIRIBMZE";
// 	size_t max = strlen(s2);
// 	printf("%s\n",strnstr(s2, s2, max));
// 	printf("%s\n",ft_strnstr(s2, s2, max));
// 	// printf("%s\n",strnstr("aaaaa", NULL, 10));
// 	// printf("%s\n",ft_strnstr("aaaaa", NULL, 10));
// 	// char *v = ft_strstr(a,b);
// 	// printf("%s\n",v);
// 	return 0;
// }
