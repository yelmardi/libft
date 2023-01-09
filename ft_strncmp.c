/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mard <yel-mard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:58:37 by yel-mard          #+#    #+#             */
/*   Updated: 2022/11/29 20:22:32 by yel-mard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*i1;
	unsigned char	*i2;

	i1 = (unsigned char *)s1;
	i2 = (unsigned char *)s2;
	while (n && *i1 && *i1 == *i2)
	{
		i1++;
		i2++;
		n--;
	}
	if (n)
		return (*i1 - *i2);
	return (0);
}
