/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfumiya <kfumiya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 10:35:59 by kfumiya           #+#    #+#             */
/*   Updated: 2021/02/01 07:13:09 by kfumiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flags.h"

void	flags_init(t_flags *flags)
{
	flags->minus = 0;
	flags->zero = 0;
	flags->precision = -1;
	flags->precision_upgrade = 0;
	flags->width = -1;
}
