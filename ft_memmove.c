/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 18:48:08 by carferna          #+#    #+#             */
/*   Updated: 2020/01/13 20:20:21 by carferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (src < dst)
		while (n--)
			*(unsigned char *)(dst + n) = *(unsigned char *)(src + n);
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
