/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgracefo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:04:55 by lgracefo          #+#    #+#             */
/*   Updated: 2022/03/28 18:05:04 by lgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mass;

	mass = (char *) malloc(count * size);
	if (mass == NULL)
		return (NULL);
	ft_bzero(mass, count * size);
	return (mass);
}
