/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:41:22 by tshigena          #+#    #+#             */
/*   Updated: 2021/10/27 16:41:22 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	i = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (i < n)
	{
		if (ss1[i] != ss2[i] || ss1[i] == '\0' || ss2[i] == '\0')
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char a[30] = {"aaas"};
// 	char b[10] = {"daas"};
// 	// strcpy(a,b);
// 	printf("%d\n",ft_strncmp(a,b,3)); 
// 	printf("%d\n",strncmp(a,b,3)); 
// 	// char *v = ft_strcmp(a,b);
// 	// printf("%s\n",v); 

// 	return 0;  
// } 
