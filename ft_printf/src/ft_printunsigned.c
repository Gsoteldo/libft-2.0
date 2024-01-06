/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:14:33 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/01/06 21:19:04 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_printunsigned(unsigned int n, int *total)
{
	int	aux;

	if (n <= 9)
	{
		ft_printchar(n + '0', total);
		aux = *total;
		if (aux == -1)
		{
			*total = -1;
			return ;
		}
	}
	else
	{
		ft_printunsigned(n / 10, total);
		aux = *total;
		if (aux == -1)
		{
			*total = -1;
			return ;
		}
		ft_printchar(n % 10 + '0', total);
	}
}
