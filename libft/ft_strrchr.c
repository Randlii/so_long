/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgracefo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:24:25 by lgracefo          #+#    #+#             */
/*   Updated: 2022/03/28 18:24:27 by lgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pointer;

	pointer = (char *)s + ft_strlen((char *)s);
	while (*pointer != (unsigned char)c)
	{
		if (pointer == (char *)s)
			return (NULL);
		pointer--;
	}
	return (pointer);
}
