/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:11:21 by lelam             #+#    #+#             */
/*   Updated: 2023/11/21 19:11:21 by lelam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	slen;

	slen = 0;
	while (src[slen] != '\0')
		slen++;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (slen);
}

int	main(void)
{
	char		dst[50];
	const char	src[] = "This is the source string!";
	size_t		size;
	size_t		slen;

	size = 15;
	if (size == 0)
		printf("Value for size is not accepted!\n");
	else
	{
		slen = ft_strlcpy(dst, src, size);
		printf("Source: %s\n", src);
		printf("Length of Source: %lu\n", slen);
		printf("Size Limit: %lu\n", size);
		printf("Destination: %s\n", dst);
	}
	return (0);
}