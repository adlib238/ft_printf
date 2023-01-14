/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero_pad.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfumiya <kfumiya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 09:35:28 by kfumiya           #+#    #+#             */
/*   Updated: 2021/01/31 03:40:10 by kfumiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "transform.h"

char	*zero_pad_ptr(char *str, int length, int max)
{
	int	i;
	int	min;

	min = length - max;
	i = 0;
	while (str[i] != 'x')
	{
		if (i >= min)
			str[i] = '0';
		i++;
	}
	if (i >= min)
	{
		str[i] = '0';
		str[1] = 'x';
	}
	return (str);
}

char	*zero_pad(char *str, char f, int length, int max)
{
	int	i;
	int	is_neg_int;
	int	min;

	if (f == 'p')
		return (zero_pad_ptr(str, length, max));
	is_neg_int = 0;
	min = length - max;
	i = 0;
	while (i < length
		&& ((str[i] == ' ')
		|| ((f == 'd' || f == 'i') && str[i] == '-' && (is_neg_int = 1))))
	{
		if (i >= min)
			str[i] = '0';
		i++;
	}
	if (is_neg_int)
	{
		i = 0;
		while (str[i] == ' ')
			i++;
		str[i] = '-';
	}
	return (str);
}
