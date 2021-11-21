/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:39:47 by tshigena          #+#    #+#             */
/*   Updated: 2021/11/01 17:00:43 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memchr(const void *s, int c, size_t n);
// int	main(void)
// {
// 	char a[] = "abcd\0efghijklmn";
// 	char b[] = "abcd\0efghijklmn";
// 	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};

// 	printf("%s\n", (char *)ft_memchr(a,0, 0));
// 	printf("%s\n", (char *)memchr(b,0, 0));
// 	printf("%s", (char *)ft_memchr(tab, -1, 7));
// 	printf("%s", (char *)memchr(tab, -1, 7));
// 	return (0);
// }

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ss;

	i = 0;
	ss = (unsigned char *)s;
	while (i < n)
	{
		if (ss[i] == (unsigned char)c)
			return (&ss[i]);
		i++;
	}
	return (NULL);
}
