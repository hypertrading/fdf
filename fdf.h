/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklepper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 18:26:25 by vklepper          #+#    #+#             */
/*   Updated: 2016/02/04 20:52:53 by vklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "mlx.h"
# include "libft.h"
# include "stdlib.h"
# include <math.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct		s_map
{
	int				x;
	int				y;
	int				z;
	int				color_b;
	int				color_g;
	int				color_r;
	int				z_max;
	struct s_map	*next;
	struct s_map	*previous;
}					t_map;

typedef struct		s_data
{
	struct s_map	*first;
	int				lenght_line;
	int				dh;
	int				dl;
	int				m;
	int				c;
	int				h;
	int				scale;
	int				origine_x;
	int				origine_y;
	int				fd;
	char			*line;
	char			**table;
	int				x;
	int				y;
	int				z_max;
}					t_data;

typedef struct		s_img
{
	void			*adr;
	char			*img;
	int				bpp;
	int				sl;
	int				endian;
}					t_img;

typedef struct		s_gps
{
	void			*mlx;
	void			*win;
	int				map_x;
	int				map_y;
	int				x_a;
	int				y_a;
	int				x_b;
	int				y_b;
	int				j;
	t_img			img;
	struct s_data	*data;
}					t_gps;

void				ft_error(int i);
void				mapping(t_data *data, t_map *map);
int					how_does_it_look_like(char *file, t_data *data);
void				take_your_fucking_map(t_gps *gps);
int					my_key_funct(int k, t_gps *gps);
void				img_init(t_gps *gps);
t_map				*init_map(void);
void				draw_me_one_line(t_gps *gps, t_data *data, t_map *map);
void				color_s(t_data *data);
void				how_to_use_it(t_gps *gps);

#endif
