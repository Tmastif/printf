/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilazar <ilazar@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:08:27 by ilazar            #+#    #+#             */
/*   Updated: 2024/05/09 00:56:14 by ilazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);
int	print_arg(const char *s, va_list args);

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
			ft_putchar(*s);
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

	printf("#");
	if (*s == 's')
		count_chars = print_str(
		char *str = va_arg(args, char *);
		printf("%s", str);
	}
	else if (*s == 'd')
	{
		int nbr = va_arg(args, int);
		printf("%d", nbr);
	}
	return 0;
}

int	main(void)
{
	char *test = "aaa%sbbb%d";
	ft_printf(test, "printed", 3);

	return 0;
}

