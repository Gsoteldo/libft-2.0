/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:11:25 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/01/06 21:18:18 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_printchar(int c, int *total)
{
	int	aux;

	aux = write(1, &c, 1);
	if (aux == -1)
	{
		*total = -1;
		return ;
	}
	*total = *total + aux;
}
