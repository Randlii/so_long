/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgracefo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:14:10 by lgracefo          #+#    #+#             */
/*   Updated: 2022/03/28 18:14:15 by lgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*iterator;

	iterator = lst;
	if (lst == NULL)
		return (NULL);
	while (iterator -> next != NULL)
		iterator = iterator -> next;
	return (iterator);
}
