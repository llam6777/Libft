/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:38:27 by lelam             #+#    #+#             */
/*   Updated: 2023/11/22 13:38:27 by lelam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char	*str1 = "Alphabetical";
	char	*str2 = "NotAlpha12345";
	int	a;
	int	b;

	a = ft_isalpha(str1);
	b = ft_isalpha(str2);
	printf("Is Alpha: %d\n", a);
	printf("Is Not Alpha: %d\n", b);
	return (0);
}