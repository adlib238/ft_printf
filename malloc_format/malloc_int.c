/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfumiya <kfumiya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 08:47:00 by kfumiya           #+#    #+#             */
/*   Updated: 2021/02/01 07:10:56 by kfumiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "malloc_format.h"

int	malloc_signed(char **str, int value, t_flags *flags)
{
	int	length;
	int	tmp;

	flags->org_signed = value;
	length = 1 + (value < 0);
	tmp = value;
	while ((tmp >= 10 || tmp <= -10) && length++)
		tmp /= 10;
	if (!(*str = ft_itoa(value)))
		return (-1);
	return (length);
}

int	malloc_unsigned(char **str, unsigned int value, t_flags *flags)
{
	int				length;
	unsigned int	tmp;

	flags->org_unsigned = value;
	length = 1;
	tmp = value;
	while (tmp >= 10 && length++)
		tmp /= 10;
	if (!(*str = ft_uitoa(value)))
		return (-1);
	return (length);
}

int	malloc_hex_lx(char **str, char format, unsigned int value, t_flags *flags)
{
	int				length;
	unsigned int	tmp;
	size_t			i;
	const int		lx = (format == 'X');

	flags->org_unsigned = value;
	length = 1;
	tmp = value;
	while (tmp > 15 && length++)
		tmp /= 16;
	if (!(*str = (char *)malloc(sizeof(char *) * length)))
		return (-1);
	ft_bzero(*str, length);
	if (value == 0)
		(*str)[0] = '0';
	i = length - 1;
	while (value > 0 && lx)
	{
		(*str)[i--] = HEXADECIMAL_FORMAT_LX[value % 16];
		value = value / 16;
	}
	return (length);
}

int	malloc_hex_sx(char **str, char format, unsigned int value, t_flags *flags)
{
	int				length;
	unsigned int	tmp;
	size_t			i;
	const int		sx = (format == 'x');

	flags->org_unsigned = value;
	length = 1;
	tmp = value;
	while (tmp > 15 && length++)
		tmp /= 16;
	if (!(*str = (char *)malloc(sizeof(char *) * length)))
		return (-1);
	ft_bzero(*str, length);
	if (value == 0)
		(*str)[0] = '0';
	i = length - 1;
	while (value > 0 && sx)
	{
		(*str)[i--] = HEXADECIMAL_FORMAT_SX[value % 16];
		value = value / 16;
	}
	return (length);
}

int	malloc_pointer(char **str, void *ptr, t_flags *flags)
{
	size_t			i;
	int				length;
	unsigned long	tmp;

	flags->org_ptr = ptr;
	length = 3;
	tmp = (long)ptr;
	while (tmp > 15 && length++)
		tmp /= 16;
	if (!(*str = (char *)malloc(sizeof(char *) * length)))
		return (-1);
	ft_bzero(*str, length);
	(*str)[0] = '0';
	(*str)[1] = 'x';
	tmp = (long)ptr;
	if (tmp == 0)
		(*str)[2] = '0';
	i = length - 1;
	while (tmp > 0)
	{
		(*str)[i--] = HEXADECIMAL_FORMAT_SX[tmp % 16];
		tmp = tmp / 16;
	}
	return (length);
}
