/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgracefo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:13:34 by lgracefo          #+#    #+#             */
/*   Updated: 2022/03/28 18:13:42 by lgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*iterator;

	if (lst == NULL)
		return ;
	iterator = lst;
	while (iterator != NULL)
	{
		f(iterator -> content);
		iterator = iterator -> next;
	}
}
