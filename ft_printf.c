/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:25:06 by rrebois           #+#    #+#             */
/*   Updated: 2022/11/23 17:54:11 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft/libft.h"

int	ft_printf(const char *s, ...)
{
	int	i = 0;
	int	count = 0;
	va_list	ap;
	va_start(ap, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			if (s[i + 1] == 'c')
				ft_putchar_fd((char) va_arg(ap, int), 1);
			else if (s[i + 1] == 's')
				ft_putstr_fd(va_arg(ap, char *), 1);
			else if (s[i + 1] == 'p')
				ft_convert_nbr(va_arg(ap, int), s[i + 1]);
			else if (s[ i + 1] == 'd' || s[i + 1] == 'i')
				ft_putnbr_fd(va_arg(ap, int), 1);
			i++;
		}
		else
			ft_putchar_fd(s[i], 1);
		i++;
	}
	va_end(ap);
	return (count);
}

#include <stdio.h>
int	main()
{
	char	s[]="hello";
	int		i = 5;
	int		*ptr = &i;
	printf("%s\n%c\n%p\n%d\n", s, s[0], ptr, s[0]);
	ft_printf("%s\n%c\n%p\n%d\n", s, s[0], ptr, s[0]);
}
//https://c.developpez.com/cours/bernard-cassagne/node118.php
//https://perhonen.fr/blog/2016/01/faire-fonction-nombre-arguments-variable-en-c-2701
