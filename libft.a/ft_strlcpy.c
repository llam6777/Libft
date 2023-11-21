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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	slen;

	slen = 0;
	while (src[slen] != '\0')
		slen++;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (slen);
}

int	main(void)
{
	char	dest[50];
	char	src[] = "This is the source string!";
	unsigned int	size;
	unsigned int	slen;

	size = 26;
	if (size == 0)
		printf("Value for size is not accepted!\n");
	else
	{
		slen = ft_strlcpy(dest, src, size);
		printf("Source: %s\n", src);
		printf("Length of Source: %d\n", slen);
		printf("Size Limit: %d\n", size);
		printf("Destination: %s\n", dest);
	}
	return (0);
}