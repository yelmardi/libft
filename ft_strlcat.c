/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mard <yel-mard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:08:17 by yel-mard          #+#    #+#             */
/*   Updated: 2022/11/29 14:14:54 by yel-mard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	total_len;
	size_t	i;
	size_t	j;

	total_len = ft_strlen(src);
	if (size != 0)
	{
		dstlen = ft_strlen(dst);
		size--;
		i = dstlen;
		j = 0;
		while (i < size && src[j])
			dst[i++] = src[j++];
		if (size + 1 > dstlen)
		{
			dst[i] = '\0';
			total_len += dstlen;
		}
		else
			total_len += size + 1;
	}
	return (total_len);
}
