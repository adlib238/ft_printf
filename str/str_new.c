/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfumiya <kfumiya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 08:08:59 by kfumiya           #+#    #+#             */
/*   Updated: 2021/01/30 04:04:59 by kfumiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

t_str	*str_new(void *content, int length)
{
	t_str	*new;

	if (!(new = (t_str *)malloc(sizeof(*new))))
		return (NULL);
	new->content = content;
	new->length = length;
	new->next = NULL;
	return (new);
}
