/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:40:59 by tshigena          #+#    #+#             */
/*   Updated: 2021/10/27 16:41:00 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*total;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	total = (char *)malloc((len + 1) * sizeof(char));
	if (!total)
		return (NULL);
	ft_strlcpy(total, s1, ft_strlen(s1) + 1);
	ft_strlcat(total, s2, len + 1);
	return (total);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	char d[20] = {"abcdfeljg"};
// 	// char *d[20];
// 	char c[] = {"333"};
// 	char *b;
// 	b = ft_strjoin(d, c);
// 		// b = d;
// 	// printf("%lu\n",sizeof(str));
// 	// printf("%lu",sizeof(d));
// 	// strcpy(a,b);
// 	printf("%s\n",b );
// 	// system ("leaks ft_strjoin");
// 	free(b);
// 	// while (++i < 3) 
// 	// {
// 	// printf("%s\n", *d);
// 	// d += 1;
// 	// }
// 	// printf("%p\n", d);
// 	// while (++i < 8)
// 	// {
// 	// 	printf("%d\n", b[i]);
// 	// }
// 	// return 0;
// }
