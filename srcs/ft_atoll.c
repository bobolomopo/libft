/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                          :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:13:20 by jandre            #+#    #+#             */
/*   Updated: 2019/11/04 11:39:24 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static long long	ft_negative(char c)
{
	if (c == '-')
		return (-1);
	else
		return (1);
	return (1);
}

int			ft_atoll(const char *str)
{
	size_t			i;
	long long		neg;
	long long	    retour;

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
	retour = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		retour = retour * 10 + (str[i] - '0');
		i++;
	}
	return (retour * neg);
}