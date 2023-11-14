/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:53:11 by lelam             #+#    #+#             */
/*   Updated: 2023/10/05 11:53:11 by lelam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	result;

	i = 0;
	neg = 1;
	result = 0;
	while ((str[i] <= ' ') && (str[i] != '\0'))
		i++;
	while (((str[i] == '-') || (str[i] == '+')) && (str[i] != '\0'))
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (((str[i] >= '0') && (str[i] <= '9')) && (str[i] != '\0'))
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * neg);
}

int	main(void)
{
	printf("%d\n", ft_atoi("---+++1234"));
	printf("%d\n", ft_atoi("   ---+++1234abc567"));
	printf("%d\n", ft_atoi("---+--+1234ab123"));
    printf("%d\n", ft_atoi("--  +abc1234"));
	return (0);
}