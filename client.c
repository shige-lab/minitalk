/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 22:41:51 by tshigena          #+#    #+#             */
/*   Updated: 2021/12/01 12:11:00 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_binary(int id, char *str)
{
	size_t	i;
	size_t	str_len;
	int		digit;
	int		bit;

	i = 0;
	str_len = ft_strlen(str);
	while (i <= str_len)
	{
		digit = 0;
		while (digit < 8)
		{
			bit = str[i] >> digit & 1;
			if (bit == 0)
				kill((pid_t)id, SIGUSR1);
			if (bit == 1)
				kill((pid_t)id, SIGUSR2);
			digit++;
			usleep(100);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	id;

	if (argc != 3)
		return (0);
	id = ft_atoi(argv[1]);
	send_binary(id, argv[2]);
	return (0);
}
