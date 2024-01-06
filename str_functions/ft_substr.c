/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:13:42 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/01/06 20:30:37 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*ptr;

	if ((unsigned int)ft_strlen(str) < start)
		return (ft_strdup(""));
	if ((size_t)ft_strlen(str + start) < len)
		len = ft_strlen(str + start);
	if (str == 0)
		return (0);
	ptr = (char *)malloc(sizeof(*str) * (len + 1));
	if (ptr == 0)
		return (0);
	ft_strlcpy(ptr, (char *)(str + start), len + 1);
	return (ptr);
}
