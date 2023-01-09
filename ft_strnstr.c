/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mard <yel-mard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:37:10 by yel-mard          #+#    #+#             */
/*   Updated: 2022/12/09 20:10:28 by yel-mard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == 0)
		return ((char *)(haystack));
	if (!len)
		return (NULL);
	i = 0;
	while (haystack[i] && i < len && len > 0)
	{
		j = 0;
		while (needle[j] && (needle[j] == haystack[i + j] && i + j < len))
			j++;
		if (needle[j] == 0)
			return (&((char *)haystack)[i]);
		i++;
	}
	return (NULL);
}
