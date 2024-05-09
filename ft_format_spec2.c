/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_spec2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilazar <ilazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:53:41 by ilazar            #+#    #+#             */
/*   Updated: 2024/05/09 21:25:47 by ilazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

int	print_unsigned(va_list args)
{
	unsigned int	count_chars;
	unsigned long	nbr;
	
	nbr = va_arg(args, unsigned int);
	ft_putnbr_fd(nbr, 1);
	count_chars = ft_cntdigits(nbr);
	return (count_chars);
}