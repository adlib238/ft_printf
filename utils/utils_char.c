/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfumiya <kfumiya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 08:26:18 by kfumiya           #+#    #+#             */
/*   Updated: 2021/01/31 21:57:08 by kfumiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int			ft_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (c);
		i++;
	}
	return (0);
}

int			ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

static int	is_decimal_format(char f)
{
	return (f == 'd' || f == 'i' || f == 'u'
			|| f == 'x' || f == 'X' || f == 'p');
}

int			is_str_format(char f)
{
	return (f == 's' || f == 'c' || f == '%' || !is_decimal_format(f));
}
