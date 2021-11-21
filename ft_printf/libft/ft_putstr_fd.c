/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:40:36 by tshigena          #+#    #+#             */
/*   Updated: 2021/11/01 22:40:24 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "limits.h"

void	ft_putstr_fd(char const *s, int fd)
{
	size_t	len;
	size_t	i;

	if (!s)
		return ;
	len = ft_strlen(s);
	i = 0;
	while (len > INT_MAX)
	{
		write(fd, &s[i], INT_MAX);
		len -= INT_MAX;
		i += INT_MAX;
	}
	write(fd, &s[i], len);
}

// #include<stdio.h>
// int	main()
// {
// 	long	l = INT_MAX + 2LL;
// 	char *a = (char *)malloc(l + 1);
// 	a = ft_memset(a, 'a', INT_MAX);
// 	a[INT_MAX]= 'b';
// 	a[l - 1]= 'c';
// 	a[l] = '\0';
// 	// ft_iutstr_fd(a, 1);
// 	printf("%s", a);
// 	return 0;
// }
