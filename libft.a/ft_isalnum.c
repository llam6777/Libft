/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:25:43 by lelam             #+#    #+#             */
/*   Updated: 2023/11/22 15:25:43 by lelam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9')))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char	*str1 = "Alpha12345";
	char	*str2 = "NotAlpha12345 *&^";
	int	a;
	int	b;

	a = ft_isalnum(str1);
	b = ft_isalnum(str2);
	printf("Is Alnum: %d\n", a);
	printf("Is Not Alnum: %d\n", b);
	return (0);
}