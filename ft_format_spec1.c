/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_spec1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilazar <ilazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:53:41 by ilazar            #+#    #+#             */
/*   Updated: 2024/05/09 20:51:20 by ilazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

int	print_str(va_list args)
{
	unsigned int	count_chars;
	char	*str;

	str = va_arg(args, char *);
	ft_putstr_fd(str, 1);
	count_chars = ft_strlen(str);
	return (count_chars);
}

int	print_int(va_list args)
{
	unsigned int	count_chars;
	int	nbr;
	
	nbr = va_arg(args, int);
	ft_putnbr_fd(nbr, 1);
	count_chars = ft_cntdigits(nbr);
	if (nbr < 0)
		count_chars++;
	return (count_chars);
}

// int	print_ptr(va_list args)
// {
// 	unsigned int	count_chars;

// 	return (count_chars);
// }

int	print_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	print_precent(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}