/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:05:33 by jandre            #+#    #+#             */
/*   Updated: 2020/01/22 18:15:48 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	size_t			i;
	unsigned int	nbr;
	char			*result;

	i = ft_nbrlen(n);
	nbr = (unsigned int)n;
	if (!(result = ft_strnew(i)))
		return (NULL);
	if (n == 0)
		result[0] = '0';
	else if (n < 0)
	{
		result[0] = '-';
		nbr = nbr * -1;
	}
	else
	{
		while (nbr > 0)
		{
			i--;
			result[i] = '0' + (nbr % 10);
			nbr = nbr / 10;
		}
	}
	return (result);
}
