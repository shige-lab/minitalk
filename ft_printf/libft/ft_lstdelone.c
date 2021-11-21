/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:39:13 by tshigena          #+#    #+#             */
/*   Updated: 2021/10/28 19:46:47 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if ((*del) && lst)
		(*del)(lst->content);
	free (lst);
}

// int	main()
// {
// 	t_list	*l;
// 	l = ft_lstnew(ft_strdup("aaaa"));
// 	char	*a;
// 	a  = (char *)l->content;
// 	ft_lstdelone(l, NULL);
// 	printf("%s\n",a);
// 	printf("%s\n",(char *)l->content);
// 	// ft_lstdelone(NULL, NULL);
// 	// printf("%s\n",(char *)l->content);

// 	return (0);
// }
