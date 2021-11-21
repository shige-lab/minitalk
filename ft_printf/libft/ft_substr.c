/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:41:42 by tshigena          #+#    #+#             */
/*   Updated: 2021/11/03 10:52:19 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (len == 0 || start >= s_len)
		return ((char *)ft_calloc(1, sizeof(char)));
	if (len > s_len)
		str = (char *)malloc(sizeof(char) * (s_len + 1));
	else
		str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, &s[start], len + 1);
	return (str);
}

// int	main(void)
// {
// 	char a[15] = "abcdefghijk";
// 	char	str[] = "lorem ipsum dolor sit amet";
// 	printf("%s\n", ft_substr(NULL, 0, 12));
// 	printf("%s\n", ft_substr(a, 200, 20));
// 	printf("%s\n", ft_substr(str, 0, 10));
// 	printf("%s\n", ft_substr("tripouille", 0, 42000));
// 	return (0);
// }
