/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:34:11 by jandre            #+#    #+#             */
/*   Updated: 2020/02/19 16:39:16 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_nbrlen_base(long long nbr, int size)
{
	int		i;
	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr /= size;
		i++;
	}
	return (i);
}
