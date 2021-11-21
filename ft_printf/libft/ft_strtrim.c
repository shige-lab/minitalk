/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:41:38 by tshigena          #+#    #+#             */
/*   Updated: 2021/11/02 21:58:11 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	if_c_is_set(const char c, const char *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	len;

	start = 0;
	if (!s1)
		return (NULL);
	if (ft_strlen(s1) == 0)
		return ((char *)ft_calloc(1, sizeof(char)));
	end = ft_strlen(s1) - 1;
	while (if_c_is_set(s1[start], set))
	{
		if (start == end)
			return ((char *)ft_calloc(1, sizeof(char)));
		start++;
	}
	while (if_c_is_set(s1[end], set))
		end--;
	len = end - start + 1;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, (s1 + start), len + 1);
	return (str);
}

static int	if_c_is_set(const char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	// (char *)calloc(1,1)
// 	// char s1[20]="123422331122";
// 	// char set[20]="1234";
// 	// char	set [] = "\t \n";
// 	// char s1[] = "  lorem \n ipsum \t dolor \n sit \t amet  \t";
// 	// char	set [] = "\t \n";
// 	// char s1[] = "          ";
// 	// printf("%s\n", ft_strtrim(s1,set));
// 	// printf("%s\n", ft_strtrim("",set));
// 	// printf("%s\n", ft_strtrim("aaaa",""));
// 	printf("%s\n", ft_strtrim("bbaaaabb","b"));
// 	return (0);
// }
