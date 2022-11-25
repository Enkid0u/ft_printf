/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:39:39 by rrebois           #+#    #+#             */
/*   Updated: 2022/11/23 17:54:21 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_convert_base_nbr(int i, char *base)
{

	int		j;

	if (i < 0)
		j = i * -1;
	else
		j = i;
	if (j < 16)
		ft_putchar_fd(base[j], 1);
	if (j >= 16)
	{
		ft_convert_base_nbr(i / 16);
		ft_convert_base_nbr(i % 16);
	}
}

void	ft_convert_nbr(int i, char c)
{
	char	base_min[16] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
	char	base_maj[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'}
	ft_putstr_fd("0x", 1);
	ft_convert_base_nbr(i, base_min);
}
