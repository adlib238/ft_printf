/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfumiya <kfumiya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 10:32:14 by kfumiya           #+#    #+#             */
/*   Updated: 2021/01/29 22:48:51 by kfumiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flags.h"

t_flags	*flags_new(void)
{
	t_flags *new;

	if (!(new = (t_flags *)malloc(sizeof(*new))))
		return (NULL);
	flags_init(new);
	return (new);
}
