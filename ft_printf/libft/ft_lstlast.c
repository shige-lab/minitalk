/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:39:21 by tshigena          #+#    #+#             */
/*   Updated: 2021/10/27 16:39:22 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int	main(void)
// {
// 	t_list *l = ft_lstnew(strdup("nyacat"));
// 	l->next = ft_lstnew(strdup("OK"));
// 	l->next->next = ft_lstnew(strdup("NO"));
// 	// t_list **s;

// 	t_list *a = ft_lstlast(l);
// 	printf("1%s\n",(char *)a->content);
// 	printf("1%s\n",(char *)l->content);
// 	printf("1%s\n",(char *)l->next->content);
// 	return (0);
// }
