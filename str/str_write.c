/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_write.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfumiya <kfumiya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 21:59:41 by kfumiya           #+#    #+#             */
/*   Updated: 2021/02/01 00:27:39 by kfumiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

void	str_write(t_str *lst)
{
	if (lst && lst->length >= 0)
		write(STDOUT_FILENO, lst->content, lst->length);
}
