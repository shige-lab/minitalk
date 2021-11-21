/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:39:50 by tshigena          #+#    #+#             */
/*   Updated: 2021/10/27 16:39:51 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	i = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char a[30] = {"a\0aas"};
// 	char b[10] = {"a\0awads"};

// 	char s[] = {-128, 0, 127, 0};
// 	char s2[] = {0, 0, 127, 0};
// 	// printf("%d\n",strncmp(a,b,6));
// 	// printf("%d\n",memcmp(a,b,6));
// 	// printf("%d\n",ft_memcmp(a,b,6));

// 	printf("%d\n",ft_memcmp("t\200", "t\0", 2));
// 	printf("%d\n",memcmp("t\200", "t\0", 2));
// 	printf("%d\n",'\200');
// 	printf("%c\n",'\200');

// 	printf("%d\n",ft_memcmp(s, s2, 1));
// 	printf("%d\n",memcmp(s, s2, 1));
// 	return (0);
// }
