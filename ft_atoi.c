/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 20:03:07 by jeftekha          #+#    #+#             */
/*   Updated: 2017/01/25 16:47:50 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int c;
	int n;

	c = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	n = 0;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			n = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		c = c * 10 + (*str++) - '0';
	if (n == 1)
		return (-c);
	return (c);
}
