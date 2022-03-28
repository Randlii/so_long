/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgracefo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:16:57 by lgracefo          #+#    #+#             */
/*   Updated: 2022/03/28 18:27:41 by lgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*mem;

	mem = malloc(sizeof(t_list) * 1);
	if (mem == NULL)
		return (NULL);
	mem -> content = content;
	mem -> next = NULL;
	return (mem);
}
