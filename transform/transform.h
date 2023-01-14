/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfumiya <kfumiya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 23:41:10 by kfumiya           #+#    #+#             */
/*   Updated: 2021/01/25 23:42:27 by kfumiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRANSFORM_H
# define TRANSFORM_H

# include "../flags/flags.h"
# include "../ft_printf.h"

char	*left_adjust(char *str, int length);

char	*shrink_to_empty(char *org, char f, int *length);

char	*zero_pad(char *str, char f, int length, int max);

char	*zero_pad_ptr(char *str, int length, int max);

char	*expand_to_size(char *org, int *length, int target);

char	*transform_value(char **str, char f,
	t_flags *flags, int *length);

#endif
