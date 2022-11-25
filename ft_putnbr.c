/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:51:24 by rrebois           #+#    #+#             */
/*   Updated: 2022/11/25 15:15:51 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int i, unsigned int *ptr)
{
	if (i < 0)
	{
		ft_putchar('-', ptr);
		i = (unsigned int)i * -1;
	}
	if ((unsigned int)i < 10)
		ft_putchar(i + '0', ptr);
	else
	{
		ft_putnbr((unsigned int)i / 10, ptr);
		ft_putnbr((unsigned int)i % 10, ptr);
	}
}
