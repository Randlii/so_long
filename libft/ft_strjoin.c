/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgracefo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:22:22 by lgracefo          #+#    #+#             */
/*   Updated: 2022/03/28 18:22:25 by lgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*mem;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	mem = (char *)malloc(len1 + len2 + 1);
	if (mem == NULL)
		return (NULL);
	ft_strlcpy(mem, s1, len1 + 1);
	ft_strlcat(mem, s2, len1 + len2 + 1);
	return (mem);
}
