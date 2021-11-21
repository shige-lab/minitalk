/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:38:13 by tshigena          #+#    #+#             */
/*   Updated: 2021/11/01 16:35:30 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*m_size;
	size_t	product;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	product = count * size;
	if (product / count != size)
		return (NULL);
	m_size = malloc(product);
	if (m_size)
		ft_bzero(m_size, product);
	return (m_size);
}

// #include <limits.h>
// int	main(void)
// {
// 	// size_t a = LONG_MAX;
// 	// size_t b = 2 * a;
// 	char *a = "abcdefg";
// 	char *b;
// 	// printf("lu\n", b);
// 	a = (char *)ft_calloc(LONG_MAX,LONG_MAX);
// 	b = (char *)calloc(1, INT_MAX + 1);
// 	printf("%s\n",a);
// 	printf("%s\n",b);
// 	// for (int i= 0;i < 9; i++)
// 	// 	printf("%c\n", a[i]);
// 	return (0);
// }
