/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:07:20 by lelam             #+#    #+#             */
/*   Updated: 2023/11/14 18:07:20 by lelam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) && ((s1[i] != '\0') || (s2[i] != '\0')))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	const char	*str1 = "Hello World!";
	const char	*str2 = "Hello World!";
	const char	*str3 = "Hello People!";
	size_t	num;
	int	result;

	num = (size_t)5;
	result = ft_strncmp(str1, str3, num);
	printf("Strings are equal up to %lu characters.\n", num);
	printf("Value returned is: %d\n", result);
	num = (size_t)15;
	result = ft_strncmp(str1, str2, num);
	printf("\nStrings are equal.\n");
	printf("Value returned is: %d\n", result);
	num = (size_t)9;
	result = ft_strncmp(str1, str3, num);
	printf("\nStrings are not equal.\n");
	printf("Value returned is: %d\n", result);
	return (0);
}