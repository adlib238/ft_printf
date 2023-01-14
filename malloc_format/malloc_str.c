/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfumiya <kfumiya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 08:47:05 by kfumiya           #+#    #+#             */
/*   Updated: 2021/01/30 22:56:07 by kfumiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "malloc_format.h"

int	malloc_char(char **str, int c, t_flags *flags)
{
	flags->org_char = c;
	if (!(*str = (char *)malloc(sizeof(*str))))
		return (-1);
	(*str)[0] = (unsigned char)c;
	return (1);
}

int	malloc_string(char **str, char *src, t_flags *flags)
{
	int length;

	if (!src)
		src = "(null)";
	flags->org_str = src;
	length = ft_strlen(src);
	if (!(*str = ft_strdup(src)))
		return (-1);
	return (length);
}
