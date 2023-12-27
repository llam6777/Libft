/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:13:31 by lelam             #+#    #+#             */
/*   Updated: 2023/11/14 18:13:31 by lelam            ###   ########.fr       */
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

int	main(void)
{
	const char	*str;
	size_t		num;

	str = "Hello World!";
	num = ft_strlen(str);
	printf("Number of Characters: %lu\n", num);
	return (0);
}