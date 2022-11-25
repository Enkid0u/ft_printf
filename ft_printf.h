/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:29:24 by rrebois           #+#    #+#             */
/*   Updated: 2022/11/25 17:08:00 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *f, ...);
void	ft_putchar(char c, unsigned int *ptr);
void	ft_putstr(char *s, unsigned int *ptr);
void	ft_convert_address(size_t i, char c, unsigned int *ptr);
void	ft_putnbr(int i, unsigned int *ptr);
void	ft_convert_nbr(unsigned int i, char c, unsigned int *ptr);
void	ft_putnbr_unsigned(unsigned int i, unsigned int *ptr);

#endif
