/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:40:44 by tshigena          #+#    #+#             */
/*   Updated: 2021/10/27 17:02:44 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*ss;

	ss = (char *)s;
	i = 0;
	while (ss[i])
	{
		if (ss[i] == (char)c)
			return (&ss[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&ss[i]);
	else
		return (NULL);
}

// int	main(void)
// {
// 	// char a[] = "abcdefghijklmn";
// 	// char b[] = "abcdefghijklmn";
// 	char s[] = "tripouille";
// 	// printf("%s\n", (char *)ft_strchr(a + 3,'d'));
// 	// printf("%s\n", (char *)strchr(b + 3,'\0'));
// 	printf("%c\n",'t' + 256);
// 	printf("%s\n", (char *)ft_strchr(s, 't' + 256));
// 	printf("%s\n", (char *)strchr(s, 't' + 256));
// 	printf("%s\n", (char *)strchr("",'a'));
// 	printf("%s\n", (char *)ft_strchr(NULL,'\0'));
// 	return (0);
// }
