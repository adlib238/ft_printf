/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfumiya <kfumiya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 21:53:19 by kfumiya           #+#    #+#             */
/*   Updated: 2021/01/29 22:58:18 by kfumiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

int	str_clear(t_str **lst)
{
	t_str	**init;
	t_str	*tmp;

	init = lst;
	while (lst && *lst)
	{
		if ((*lst)->content)
			free((*lst)->content);
		tmp = (*lst)->next;
		free(*lst);
		(*lst) = tmp;
	}
	if (init)
		*init = NULL;
	return (0);
}
