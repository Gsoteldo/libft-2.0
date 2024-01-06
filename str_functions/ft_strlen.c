/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:38:49 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/01/06 21:35:38 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlen(const char *str)
{
	int	n;
	int	cont;

	n = 0;
	cont = 0;
	while (str[n] != '\0')
	{
		cont++;
		n++;
	}
	return (cont);
}
