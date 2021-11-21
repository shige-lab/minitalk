/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:39:36 by tshigena          #+#    #+#             */
/*   Updated: 2021/11/01 16:46:53 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int	main(void)
// {
// 	t_list d;
// 	d.content = "aaaa";
// 	t_list *a = ft_lstnew(NULL);
// 	// t_list *a = ft_lstnew(d.content);
// 	t_list *l = ft_lstnew(strdup("nyacat"));

// 	printf("1%s\n",(char *)a->content);
// 	printf("1%s\n",(char *)l->content);
// 	return (0);
// }
