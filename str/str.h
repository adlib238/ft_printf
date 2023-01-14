/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfumiya <kfumiya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 23:39:21 by kfumiya           #+#    #+#             */
/*   Updated: 2021/01/25 23:40:31 by kfumiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_H
# define STR_H

# include <unistd.h>
# include <stdlib.h>

typedef struct	s_str
{
	int				length;
	char			*content;
	struct s_str	*next;
}				t_str;

t_str			*str_add_back(t_str **alst, char *content, int length);

int				str_clear(t_str **lst);

int				str_iter(t_str *lst, void (*f)(t_str*));

t_str			*str_last(t_str *lst);

t_str			*str_new(void *content, int length);

void			str_write(t_str *lst);

#endif
