/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colectibles.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:17:38 by duandrad          #+#    #+#             */
/*   Updated: 2025/02/04 18:36:34 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	new_collectible(int x, int y)
{
	t_collectible *collectible;

	collectible = malloc(sizeof(t_collectible));
	collectible->x = x;
	collectible->y = y;
	collectible->active= true;
	ft_lstadd_back(&ft_data()->collectible_list, ft_lstnew(collectible));
}