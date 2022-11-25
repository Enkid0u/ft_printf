/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:05:14 by rrebois           #+#    #+#             */
/*   Updated: 2022/11/25 15:15:47 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int i, unsigned int *ptr)
{
	if (i < 10)
		ft_putchar(i + '0', ptr);
	else
	{
		ft_putnbr_unsigned(i / 10, ptr);
		ft_putnbr_unsigned(i % 10, ptr);
	}
}
