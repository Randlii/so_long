/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_move_enemy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgracefo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:37:22 by lgracefo          #+#    #+#             */
/*   Updated: 2022/03/28 17:37:27 by lgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

void	enemy_move_up(t_map *map)
{
	int	i;

	i = -1;
	while (++i < map->enemy)
	{
		if (map->map[map->enem_coord[i].y - 1][map->enem_coord[i].x] == '0')
		{
			map->map[map->enem_coord[i].y - 1][map->enem_coord[i].x] = 'X';
			map->map[map->enem_coord[i].y][map->enem_coord[i].x] = '0';
			map->enem_coord[i].y--;
		}
		else if (map->map[map->enem_coord[i].y - 1][map->enem_coord[i].x]
				== 'P')
			end_game();
	}
}

void	enemy_move_down(t_map *map)
{
	int	i;

	i = -1;
	while (++i < map->enemy)
	{
		if (map->map[map->enem_coord[i].y + 1][map->enem_coord[i].x] == '0')
		{
			map->map[map->enem_coord[i].y + 1][map->enem_coord[i].x] = 'X';
			map->map[map->enem_coord[i].y][map->enem_coord[i].x] = '0';
			map->enem_coord[i].y++;
		}
		else if (map->map[map->enem_coord[i].y + 1][map->enem_coord[i].x]
				== 'P')
			end_game();
	}
}

void	enemy_move_left(t_map *map)
{
	int	i;

	i = -1;
	while (++i < map->enemy)
	{
		if (map->map[map->enem_coord[i].y][map->enem_coord[i].x - 1] == '0')
		{
			map->map[map->enem_coord[i].y][map->enem_coord[i].x - 1] = 'X';
			map->map[map->enem_coord[i].y][map->enem_coord[i].x] = '0';
			map->enem_coord[i].x--;
		}
		else if (map->map[map->enem_coord[i].y][map->enem_coord[i].x - 1]
				== 'P')
			end_game();
	}
}

void	enemy_move_right(t_map *map)
{
	int	i;

	i = -1;
	while (++i < map->enemy)
	{
		if (map->map[map->enem_coord[i].y][map->enem_coord[i].x + 1] == '0')
		{
			map->map[map->enem_coord[i].y][map->enem_coord[i].x + 1] = 'X';
			map->map[map->enem_coord[i].y][map->enem_coord[i].x] = '0';
			map->enem_coord[i].x++;
		}
		else if (map->map[map->enem_coord[i].y][map->enem_coord[i].x + 1]
				== 'P')
			end_game();
	}
}

void	enemy_move(t_map *map)
{
	int	i;

	i = rand() % 4;
	if (i == 0)
		enemy_move_up(map);
	if (i == 1)
		enemy_move_down(map);
	if (i == 2)
		enemy_move_left(map);
	if (i == 3)
		enemy_move_right(map);
}
