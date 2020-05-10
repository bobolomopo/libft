/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:13:20 by jandre            #+#    #+#             */
/*   Updated: 2019/11/04 11:39:24 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static long	ft_negative(char c)
{
	if (c == '-')
		return (-1);
	else
		return (1);
	return (1);
}

static long	check_error(unsigned long long ret, long long neg)
{
	if (ret > 2147483647 && neg > 0)
		return (2147483647);
	else if (ret > 2147483647 && neg < 0)
		return (-2147483648);
	return ((long)ret * neg);
}

long		ft_atol(const char *str)
{
	size_t				i;
	long				neg;
	unsigned long long	ret;

	i = 0;
	neg = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\t' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		neg = ft_negative(str[i]);
		i++;
	}
	ret = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + (str[i] - '0');
		i++;
	}
	return (check_error(ret, neg));
}
