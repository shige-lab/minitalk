/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:40:31 by tshigena          #+#    #+#             */
/*   Updated: 2021/10/27 16:40:32 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			n *= -1;
			ft_putchar_fd('-', fd);
		}
		if (n < 10)
			ft_putchar_fd(n + '0', fd);
		else
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	// int i = (-2147483647);
// 	int i = (-2147483648);
// 	char buff[0xF0];
// 	ft_putnbr_fd(i,-1);
// 	printf("\n");
// 	printf("%d\n",atoi(buff));
// 	printf("%d\n",0xF0);
// 	return (0);
// }
