/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:38:58 by tshigena          #+#    #+#             */
/*   Updated: 2021/11/02 23:04:36 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst_last;

	if (!lst || !new)
		return ;
	if (*lst)
	{
		lst_last = ft_lstlast(*lst);
		lst_last->next = new;
	}
	else
		*lst = new;
}

// int	main(void)
// {
// 	t_list *l = ft_lstnew(strdup("nyacat"));
// 	t_list *n = ft_lstnew(strdup("OK"));
// 	// t_list **s;

// 	// ft_lstadd_back(&l, NULL);
// 	ft_lstadd_back(NULL, NULL);
// 	printf("1%s\n",(char *)l->content);
// 	printf("1%s\n",(char *)n->content);
// 	printf("1%s\n",(char *)l->content);
// 	printf("1%s\n",(char *)l->next->content);
// 	// // printf("1%s\n",(char *)n->next->next->content);
// 	// n = n->next;
// 	// // s = &n;
// 	// // *s = l;
// 	// // n = n->next->next;
// 	// // printf("%s\n",(char *)n->next->next->content);
// 	// printf("%s\n",(char *)n->content);
// 	// printf("%s\n",(char *)l->content);
// 	// printf("%s\n",(char *)n->content);
// 	// printf("%s\n",(char *)n->next->content);
// 	// // printf("%s\n",(char *)n->next->next->content);
// 	return (0);
// }
