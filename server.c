/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 22:41:46 by tshigena          #+#    #+#             */
/*   Updated: 2021/12/01 12:11:20 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	recieve_binary_and_put(int bit)
{
	static t_data	data = {0};

	if (data.base == 0)
		data.base = 1;
	data.decimal = data.decimal + (bit % 10) * data.base;
	data.base *= 2;
	data.digit++;
	if (data.digit == 8)
	{
		if (data.decimal == 0)
			ft_printf("\n");
		else
			ft_printf("%c", data.decimal);
		data = (t_data){0};
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
