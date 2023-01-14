/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_add_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfumiya <kfumiya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 08:09:02 by kfumiya           #+#    #+#             */
/*   Updated: 2021/01/30 12:47:46 by kfumiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

t_str	*str_add_back(t_str **alst, char *content, int length)
{
	t_str	*last;
	t_str	*new;

	if (!content || length < 0)
		return (NULL);
	if (!(new = str_new(content, length)))
	{
		free(content);
		return (NULL);
	}
	if (*alst)
	{
		last = str_last(*alst);
		last->next = new;
	}
	else
		*alst = new;
	return (new);
}
