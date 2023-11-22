/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:07:15 by lelam             #+#    #+#             */
/*   Updated: 2023/11/22 15:07:15 by lelam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char* str1 = "0123456789";
	char* str2 = "0123abcd45";
	int	a;
	int	b;

	a = ft_isdigit(str1);
	b = ft_isdigit(str2);
	printf("Is Numeric: %d\n", a);
	printf("Is Not Numeric: %d\n", b);
	return (0);
}