/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilazar <ilazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 18:59:34 by ilazar            #+#    #+#             */
/*   Updated: 2024/05/13 13:30:10 by ilazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	print_arg(char c, va_list args);
int	print_str(va_list args);
int	print_int(va_list args);
int	print_char(va_list args);
int	print_precent(void);
int	print_unsigned(va_list args);
int	getvar_ptrhex(va_list args, char x);

#endif
