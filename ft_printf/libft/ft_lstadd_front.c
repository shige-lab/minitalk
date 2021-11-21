/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:39:03 by tshigena          #+#    #+#             */
/*   Updated: 2021/10/28 16:23:56 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list *l = ft_lstnew(strdup("nyacat"));
// 	l->next = ft_lstnew(strdup("aaaaa"));
// 	t_list *n = ft_lstnew(strdup("OK"));
// 	t_list **s;

// 	// printf("1%s\n",(char *)l->content);
// 	ft_lstadd_front(&l, n);
// 	ft_lstadd_front(&l, n);
// 	printf("1%s\n",(char *)n->content);
// 	printf("1%s\n",(char *)l->content);
// 	printf("1%s\n",(char *)n->content);
// 	printf("1%s\n",(char *)n->next->content);
// 	printf("1%s\n",(char *)l->next->content);
// 	printf("1%s\n",(char *)l->next->next->content);
// 	// n = n->next;
// 	s = &n;
// 	*s = l;
// 	// n = n->next->next;
// 	printf("%s\n",(char *)n->next->next->content);
// 	printf("%s\n",(char *)n->content);
// 	printf("%s\n",(char *)l->content);
// 	printf("%s\n",(char *)n->content);
// 	printf("%s\n",(char *)n->next->content);
// 	printf("%s\n",(char *)n->next->next->content);
// 	return (0);
// }
