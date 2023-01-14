/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   left_adjust.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfumiya <kfumiya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 21:05:58 by kfumiya           #+#    #+#             */
/*   Updated: 2021/01/29 22:57:30 by kfumiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "transform.h"

char	*left_adjust(char *str, int length)
{
	int	i;
	int start;

	start = 0;
	while (str[start] == ' ')
		start++;
	i = 0;
	while (start < length)
		str[i++] = str[start++];
	while (i < length)
		str[i++] = ' ';
	return (str);
}
