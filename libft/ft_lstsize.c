/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgracefo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:17:09 by lgracefo          #+#    #+#             */
/*   Updated: 2022/03/28 18:17:13 by lgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*iterator;
	int		i;

	i = 0;
	iterator = lst;
	while (iterator != NULL)
	{
		iterator = iterator -> next;
		i++;
	}
	return (i);
}
