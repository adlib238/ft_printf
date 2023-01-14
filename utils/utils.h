/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfumiya <kfumiya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 23:42:41 by kfumiya           #+#    #+#             */
/*   Updated: 2021/01/31 21:57:14 by kfumiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include <stdlib.h>

# define CHECK_VALID_FLAGS	"-.*0123456789"
# define CHECK_VALID_FORMATS	"cspdiuxX"

int		ft_isdigit(int c);

int		ft_in_set(char c, char const *set);

int		is_str_format(char f);

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size);

size_t	ft_strlen(char const *s);

void	ft_strrev(char *str);

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strdup(char const *s1);

int		ft_abs(int nbr);

char	*ft_itoa(int n);

char	*ft_uitoa(unsigned int n);

#endif
