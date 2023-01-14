/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfumiya <kfumiya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 23:21:39 by kfumiya           #+#    #+#             */
/*   Updated: 2021/01/31 03:40:23 by kfumiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "flags/flags.h"
# include "malloc_format/malloc_format.h"
# include "str/str.h"
# include "transform/transform.h"
# include "utils/utils.h"

# define PRINTF_VALID_FORMATS "cspdiuxX\%"

int	ft_printf(char const *str, ...);

int	malloc_signed(char **str, int value, t_flags *flags);

int	malloc_unsigned(char **str, unsigned int value, t_flags *flags);

int	malloc_hex(char **str, char format, unsigned int val, t_flags *flags);

int	malloc_pointer(char **str, void *ptr, t_flags *flags);

int	malloc_char(char **str, int c, t_flags *flags);

int	malloc_string(char **str, char *src, t_flags *flags);

#endif
