/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:17:32 by lelam             #+#    #+#             */
/*   Updated: 2023/11/22 18:17:32 by lelam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c)
{
	if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int	main(void)
{
	int	a;
	int	b;
    int c;

	a = ft_isalnum('k');
	b = ft_isalnum('9');
    c = ft_isalnum(' ');
	printf("Is Alnum: %d\n", a);
    printf("Is Alnum: %d\n", b);
	printf("Is Not Alnum: %d\n", c);
	return (0);
}