/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_last.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfumiya <kfumiya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 08:08:54 by kfumiya           #+#    #+#             */
/*   Updated: 2021/01/29 23:02:28 by kfumiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

t_str	*str_last(t_str *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
