/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 12:52:17 by jandre            #+#    #+#             */
/*   Updated: 2020/02/19 17:06:58 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_nbrlen(int n)
{
	size_t	i;
	long	nbr;

	nbr = (long)n;
	i = 1;
	if (nbr < 0)
	{
		i++;
		nbr = nbr * -1;
	}
	while (nbr >= 10)
	{
		i++;
		nbr /= 10;
	}
	return (i);
}
