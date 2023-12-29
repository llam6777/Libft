/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:20:12 by lelam             #+#    #+#             */
/*   Updated: 2023/11/14 18:20:12 by lelam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != 0)
	    len++;
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = 0;
	if (size == 0 || size <= dlen)
		return (slen + size);
	while ((i < size - dlen - 1) && (src[i] != '\0'))
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + i);
}

int	main(void)
{
	char			str1[30] = "Original String!";
	const char		str2[] = "Appended String!";
	size_t			size;

	size = 31;
	printf("%lu\n", ft_strlcat(str1, str2, size));
	if (size > ft_strlen(str1))
		printf("%s\n", str1);
	return (0);
}