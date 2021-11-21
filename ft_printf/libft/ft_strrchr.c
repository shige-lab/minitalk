/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:41:35 by tshigena          #+#    #+#             */
/*   Updated: 2021/10/28 16:44:10 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strrchr(const char *s, int c);
// int	main(void)
// {
// 	// char a[] = "wabcadefghijaklmn";
// 	// char b[] = "wabcadefghijaklmn";
// 	printf("%s\n", (char *)ft_strrchr("baaaaaaa",'b'));
// 	printf("%s\n", (char *)strrchr("baaaaaaa",'b'));
// 	// printf("%s\n", (char *)ft_strrchr("aaaaaaa",'\0'));
// 	// printf("%s\n", (char *)strrchr("aaaaaaa",'\0'));
// 	// printf("%s\n", (char *)ft_strrchr(NULL,'w'));
// 	// printf("%s\n", (char *)strrchr(NULL,'w'));
// 	return (0);
// }

char	*ft_strrchr(const char *s, int c)
{
	size_t	end;

	end = ft_strlen(s);
	while (end >= 0)
	{
		if (((char *)s)[end] == (char)c)
			return (&((char *)s)[end]);
		if (end == 0)
			break ;
		end--;
	}
	return (NULL);
}
