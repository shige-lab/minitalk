/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:40:51 by tshigena          #+#    #+#             */
/*   Updated: 2021/10/28 16:39:22 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !(*f))
		return ;
	while (s[i])
	{
		(*f)(i, &s[i]);
		++i;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	char a[10] = "absdei";
// 	ft_striteri(a,NULL);
// 	printf("%s\n",a);
// 	return (0);
// }
