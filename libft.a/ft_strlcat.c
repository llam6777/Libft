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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dlen;
	unsigned int	slen;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = 0;
	if (size == 0 || size <= dlen)
		return (slen + size);
	while ((src[i] != '\0') && (i < size - dlen - 1))
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + i);
}

int	main(void)
{
	char	str1[] = "Original String!";
	char	str2[] = "Appended String!";
	unsigned int	num;

	num = 33;
	printf("%d\n", ft_strlcat(str1, str2, num));
	if (num > ft_strlen(str1))
		printf("%s\n", str1);
	return (0);
}