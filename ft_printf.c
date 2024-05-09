/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilazar <ilazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:08:27 by ilazar            #+#    #+#             */
/*   Updated: 2024/05/09 21:27:47 by ilazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int	ft_printf(const char *s, ...)
{
	va_list	args;
	unsigned int	count_chars;

	va_start(args, s);
	count_chars = 0;
	while (*s != '\0')
	{
		printf("\n");
		if (*s == '%')
		{
			s++;
			//if *s == special extra
			//special extra function
			//s++;
			count_chars += print_arg(s, args);
			s++;
		}
		else
		{
			ft_putchar_fd(*s, 1);
			s++;
			count_chars++;
		}
	}
	va_end(args);
	return (count_chars);
}

int	print_arg(const char *s, va_list args)
{
	unsigned int	count_chars;

	count_chars = 0;
	printf("#");
	if (*s == 's')
		count_chars = print_str(args);
	else if (*s == 'd' || *s == 'i')
		count_chars = print_int(args);
	//else if (*s == 'p')
	//	count_chars = print_ptr(args);
	else if (*s == 'c')
		count_chars = print_char(*s);
	else if (*s == '%')
		count_chars = print_precent();
	else if (*s == 'u')
		count_chars = print_unsigned(args);
	return (count_chars);
}

int	main(void)
{
	int	chars;
	char *test = "aa%saa%d";
	chars = ft_printf(test, "**", -8);
	printf("\nchars: %d\n", chars);
	printf("\n\n");
	chars = printf("aa%saa%u", "**", -8);
	printf("\nchars: %d\n", chars);
	return 0;
}

