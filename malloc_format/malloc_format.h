/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_format.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfumiya <kfumiya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 23:38:43 by kfumiya           #+#    #+#             */
/*   Updated: 2021/01/30 14:49:39 by kfumiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MALLOC_FORMAT_H
# define MALLOC_FORMAT_H

# define HEXADECIMAL_FORMAT_SX	"0123456789abcdef"
# define HEXADECIMAL_FORMAT_LX	"0123456789ABCDEF"

# include "../flags/flags.h"

int	malloc_signed(char **str, int value, t_flags *flags);

int	malloc_unsigned(char **str, unsigned int value, t_flags *flags);

int	malloc_hex_lx(char **str, char format, unsigned int value, t_flags *flags);

int	malloc_hex_sx(char **str, char format, unsigned int value, t_flags *flags);

int	malloc_pointer(char **str, void *ptr, t_flags *flags);

int	malloc_char(char **str, int c, t_flags *flags);

int	malloc_string(char **str, char *src, t_flags *flags);

#endif
