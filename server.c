/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 22:41:46 by tshigena          #+#    #+#             */
/*   Updated: 2021/11/19 22:02:10 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	putchar_from_binary(int binary)
{
	int	base;
	int	decimal;

	base = 1;
	decimal = 0;
	while (binary > 0)
	{
		decimal = decimal + (binary % 10) * base;
		binary = binary / 10;
		base = base * 2;
	}
	ft_printf("%c", decimal);
}

void	recieve_binary_and_put(int bit)
{
	static int	binary = 0;
	static int	binary_digit = 0;

	// printf("%d\n",bit);
	binary = (binary * 10) + (bit % 2);
	binary_digit++;
	if (binary_digit == 7)
	{
		if (binary)
			putchar_from_binary(binary);
		else
			ft_printf("\n");
		binary_digit = 0;
		binary = 0;
	}
}

int	main(void)
{
	int	my_pid;

	my_pid = getpid();
	ft_printf("%d\n", my_pid);
	while (1)
	{
		signal(SIGUSR1, recieve_binary_and_put);
		signal(SIGUSR2, recieve_binary_and_put);
		pause();
	}
	return (0);
}
