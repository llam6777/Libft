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

int	ft_atoi(const char *nptr)
{
	int	i;
	int	neg;
	int	result;

	i = 0;
	neg = 1;
	result = 0;
	while ((nptr[i] <= ' ') && (nptr[i] != '\0'))
		i++;
	while (((nptr[i] == '-') || (nptr[i] == '+')) && (nptr[i] != '\0'))
	{
		if (nptr[i] == '-')
			neg *= -1;
		i++;
	}
	while (((nptr[i] >= '0') && (nptr[i] <= '9')) && (nptr[i] != '\0'))
	{
		result *= 10;
		result += nptr[i] - '0';
		i++;
	}
	return (result * neg);
}

int	main(void)
{
	printf("%d\n", ft_atoi("---+++1234"));
	printf("%d\n", ft_atoi("   ---+++1234abc"));
	printf("%d\n", ft_atoi(" ---+--+1234ab123"));
    printf("%d\n", ft_atoi("--  +1234"));
	return (0);
}