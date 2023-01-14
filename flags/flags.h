/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfumiya <kfumiya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 23:36:18 by kfumiya           #+#    #+#             */
/*   Updated: 2021/02/01 07:09:14 by kfumiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGS_H
# define FLAGS_H

# include <stdarg.h>
# include <stdlib.h>
# include "../utils/utils.h"

# define PRINTF_VALID_FLAGS 	"-.*0123456789"

typedef struct	s_flags
{
	int				zero;
	int				minus;
	int				width;
	int				precision;
	int				precision_upgrade;

	int				org_signed;
	unsigned int	org_unsigned;
	void			*org_ptr;
	char			org_char;
	char			*org_str;

}				t_flags;

void			flags_init(t_flags *flags);

t_flags			*flags_new(void);

t_flags			*flags_parse(t_flags *flags, char const *str,
					char f, va_list *args);

#endif
