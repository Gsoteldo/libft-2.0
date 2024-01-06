/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:12:36 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/01/06 21:18:40 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_printhexa(unsigned int n, char c, int *total)
{
	int	aux;

	if (n >= 16)
	{
		ft_printhexa(n / 16, c, total);
		aux = *total;
		if (aux == -1)
		{
			*total = -1;
			return ;
		}
		ft_printhexa(n % 16, c, total);
	}
	else
	{
		if (n <= 9)
			ft_printchar(n + '0', total);
		else
		{
			if (c == 'x')
				ft_printchar(n - 10 + 'a', total);
			else if (c == 'X')
				ft_printchar(n - 10 + 'A', total);
		}
	}
}
