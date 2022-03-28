/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_move_left_right.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgracefo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:42:06 by lgracefo          #+#    #+#             */
/*   Updated: 2022/03/28 17:42:07 by lgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_left(t_map *map)
{
	map->map[map->play_coord.y][map->play_coord.x - 1] = 'P';
	map->map[map->play_coord.y][map->play_coord.x] = '0';
	map->play_coord.x--;
	steps(map);
}

void	move_right(t_map *map)
{
	map->map[map->play_coord.y][map->play_coord.x + 1] = 'P';
	map->map[map->play_coord.y][map->play_coord.x] = '0';
	map->play_coord.x++;
	steps(map);
}

void	move_player_left(t_map *map)
{
	if (map->map[map->play_coord.y][map->play_coord.x - 1] == '0')
		move_left(map);
	else if (map->map[map->play_coord.y][map->play_coord.x - 1] == 'C')
	{
		move_left(map);
		map->coin--;
	}
	else if (map->map[map->play_coord.y][map->play_coord.x - 1] == 'E' &&
			map->coin == 0)
		end_game();
}

void	move_player_right(t_map *map)
{
	if (map->map[map->play_coord.y][map->play_coord.x + 1] == '0')
		move_right(map);
	else if (map->map[map->play_coord.y][map->play_coord.x + 1] == 'C')
	{
		move_right(map);
		map->coin--;
	}
	else if (map->map[map->play_coord.y][map->play_coord.x + 1] == 'E' &&
		map->coin == 0)
		end_game();
}
