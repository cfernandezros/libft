/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 16:40:15 by carferna          #+#    #+#             */
/*   Updated: 2020/01/14 14:13:11 by carferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int res;
	int op;

	op = 1;
	res = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t'
				|| *str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-')
		op = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && ((*str >= '0' & *str <= '9')))
	{
		res = (res * 10) + (*str - 48);
		++str;
	}
	return (res * op);
}
