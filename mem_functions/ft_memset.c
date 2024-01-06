/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:54:45 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/01/06 20:22:54 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t		n;
	char		*p;

	p = (char *)str;
	n = 0;
	while (n < len)
	{
		p[n] = c;
		n++;
	}
	return (str);
}