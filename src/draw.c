/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/04 20:46:39 by vklepper          #+#    #+#             */
/*   Updated: 2016/02/04 20:46:42 by vklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	img_pixel_put(t_gps *gps, int x, int y, t_map *map)
{
	int	pos;

	if ((x < gps->map_x && y < gps->map_y && x >= 0 && y >= 0))
	{
		pos = (x * gps->img.bpp / 8) + (y * gps->img.sl);
		gps->img.img[pos] = map->color_b;
		gps->img.img[pos + 1] = map->color_g;
		gps->img.img[pos + 2] = map->color_r;
	}
}

void	draw_me_one_line(t_gps *gps, t_data *data, t_map *map)
{
	data->dh = gps->x_b - gps->x_a;
	data->dl = gps->y_b - gps->y_a;
	data->c = -1;
	data->m = abs(data->dh) > abs(data->dl) ? abs(data->dh) : abs(data->dl);
	while (++data->c < data->m)
		img_pixel_put(gps, gps->x_a + data->c * data->dh / data->m,
				gps->y_a + data->c * data->dl / data->m, map);
}

void	how_to_use_it(t_gps *gps)
{
	mlx_string_put(gps->mlx, gps->win, 10, 10, 0xFFFFFF, "9 / 6 : Zoom");
	mlx_string_put(gps->mlx, gps->win, 10, 30, 0xFFFFFF, "+ / - : hauteur");
	mlx_string_put(gps->mlx, gps->win, 10, 50, 0xFFFFFF,
		"Fleches dir. : se deplacer");
}
