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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

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
	char* str1 = "Hello World!";
	char* str2 = "Hello World!";
	char* str3 = "Hello People!";
	int	num;
	int	result;

	num = 5;
	result = ft_strncmp(str1, str2, num);
	printf("Strings are equal up to %d characters.\n", num);
	printf("Value returned is: %d\n", result);
	num = 15;
	result = ft_strncmp(str1, str2, num);
	printf("\nStrings are equal.\n");
	printf("Value returned is: %d\n", result);
	num = 9;
	result = ft_strncmp(str1, str3, num);
	printf("\nStrings are not equal.\n");
	printf("Value returned is: %d\n", result);
	return (0);
}