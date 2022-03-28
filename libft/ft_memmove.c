/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgracefo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:18:00 by lgracefo          #+#    #+#             */
/*   Updated: 2022/03/28 18:18:06 by lgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst2;
	char	*src2;

	dst2 = (char *)dst;
	src2 = (char *)src;
	if (src == NULL && dst == NULL)
		return (NULL);
	if (dst2 > src2)
	{
		while (len > 0)
		{
			dst2[len - 1] = src2[len - 1];
			len--;
		}
	}
	else
		dst2 = ft_memcpy(dst, src, len);
	return (dst);
}
