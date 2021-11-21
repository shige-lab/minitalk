/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 22:41:51 by tshigena          #+#    #+#             */
/*   Updated: 2021/11/08 23:51:34 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_binary(int id, char *binary)
{
	while (*binary)
	{
		if (*binary == '0')
			kill((pid_t)id, SIGUSR1);
		if (*binary == '1')
			kill((pid_t)id, SIGUSR2);
		binary++;
		usleep(100);
	}
}

void	to_binary_and_send(int id, char *str)
{
	char	*binary;

	while (*str)
	{
		binary = ft_itoa_dx(*str, 2);
		if (binary == NULL)
			return ;
		send_binary(id, binary);
		free(binary);
		str++;
	}
	send_binary(id, "0000000");
}

int	main(int argc, char **argv)
{
	int	id;

	if (argc != 3)
		return (0);
	id = ft_atoi(argv[1]);
	to_binary_and_send(id, argv[2]);
	// system ("leaks client.o");
	return (0);
}
