/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 18:55:44 by carferna          #+#    #+#             */
/*   Updated: 2020/01/13 18:58:15 by carferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *fnd, size_t n)
{
	size_t len;

	len = ft_strlen(fnd);
	if (*fnd == '\0')
		return ((char *)str);
	while (*str && len <= n--)
	{
		if (!ft_strncmp(str, fnd, len))
			return ((char *)str);
		str++;
	}
	return (0);
}
