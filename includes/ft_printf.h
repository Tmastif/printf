/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilazar <ilazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:42:05 by ilazar            #+#    #+#             */
/*   Updated: 2024/05/09 20:52:10 by ilazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <stdarg.h>

int ft_printf(const char *s, ...);
int	print_arg(const char *s, va_list args);
int	print_str(va_list args);
int	print_ptr(va_list args);
int	print_int(va_list args);
int	print_char(char c);
int	print_precent(void);
int	print_unsigned(va_list args);

#endif
