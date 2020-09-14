/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 16:35:33 by carferna          #+#    #+#             */
/*   Updated: 2020/01/13 20:25:55 by carferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t len;

	len = ft_strlen(s);
	s += len;
	if ((unsigned char)c == 0)
		return ((char *)s);
	while (len--)
		if (*(--s) == (unsigned char)c)
			return ((char *)s);
	return (0);
}
