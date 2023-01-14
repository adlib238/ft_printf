/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_iter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfumiya <kfumiya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 21:56:49 by kfumiya           #+#    #+#             */
/*   Updated: 2021/01/29 22:58:31 by kfumiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

int	str_iter(t_str *lst, void (*f)(t_str *))
{
	int	total;

	total = 0;
	if (!f)
		return (0);
	while (lst)
	{
		(*f)(lst);
		total += lst->length;
		lst = lst->next;
	}
	return (total);
}
