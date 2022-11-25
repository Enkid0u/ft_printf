/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:25:06 by rrebois           #+#    #+#             */
/*   Updated: 2022/11/23 16:54:30 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "../libft/libft.h"
#include <stdio.h>

int	ft_printf(const char *s, ...)
{
	char	base[9] = {'c', 's', 'p', 'd', 'i', 'u', 'x', 'X', '%'};
	//void	test[2] = {&ft_putchar_fd, &ft_putstr_fd};
	void	(*f)[2]() = {&ft_putchar_fd, &ft_putstr_fd};
	int	i = 0;
	int j;
	va_list	ap;
	va_start(ap, s);
	while (s[i] != '\0')
	{

		if (s[i] == '%')
		{
			j = 0;
			while (base[j] != '\0')
			{
				if (base[j] == s[i + 1])
					f[j](s[i], 1);
				j++;
			}
			i++;
		}
		if (s[i] != '%')
			ft_putchar_fd(s[i], 1);
		i++;
	}
	va_end(ap);
	return (0);
}

#include <stdio.h>
int	main()
{
	char	s[]="hello";
	//int		i = 5;
	printf("printf: %c\n", s[0]);
	ft_printf("ft_printf: %c\n", s[0]);
}
//https://c.developpez.com/cours/bernard-cassagne/node118.php
//https://perhonen.fr/blog/2016/01/faire-fonction-nombre-arguments-variable-en-c-2701
//https://stackoverflow.com/questions/42468317/c-write-the-address-of-a-pointer-on-the-standard-output
