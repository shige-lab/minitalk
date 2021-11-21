/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:38:54 by tshigena          #+#    #+#             */
/*   Updated: 2021/11/01 17:21:04 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*add_char(char *dest, const char c);
static int	nummber_of_digits(long n);
static void	int_to_str(long n, char *str_num);

char	*ft_itoa(int n)
{
	char	*str_num;

	if (n < 0)
	{
		str_num = (char *)ft_calloc(nummber_of_digits(n) + 2, sizeof(char));
		if (!str_num)
			return (NULL);
		str_num[0] = '-';
	}
	else
	{
		str_num = (char *)ft_calloc(nummber_of_digits(n) + 1, sizeof(char));
		if (!str_num)
			return (NULL);
	}
	int_to_str(n, str_num);
	return (str_num);
}

static int	nummber_of_digits(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static void	int_to_str(long n, char *str_num)
{
	int		last_num;
	char	c;

	if (n < 0)
		n *= -1;
	last_num = n % 10;
	n = n / 10;
	if (n > 0)
		int_to_str(n, str_num);
	c = '0' + last_num;
	str_num = add_char(str_num, c);
}

static char	*add_char(char *dest, const char c)
{
	size_t	i;

	i = ft_strlen(dest);
	if (c != '\0')
	{
		dest[i] = c;
		dest[++i] = '\0';
	}
	return (dest);
}
// #include<limits.h>
// int	main(void)
// {
// 	// int i = 0;
// 	// printf("%d\n",i);
// 	// printf("%s\n", ft_itoa(i));
// 	// printf("%s\n", ft_itoa(-9));
// 	printf("解%s\n", ft_itoa(INT_MIN));
// 	printf("解%s\n", ft_itoa(INT_MAX));
// 	printf("解%s\n", ft_itoa(-3875792));
// 	printf("解%s\n", ft_itoa(3875792));
// 	// printf("%d\n", itoa(9));
// 	return (0);
// }
