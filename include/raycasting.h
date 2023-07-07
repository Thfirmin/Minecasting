/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycasting.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:39:49 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/07/06 22:46:53 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAYCASTING_H
# define RAYCASTING_H

# include "cub3d.h"

typedef struct s_cube	t_cube;

int		load_engine(t_cube *cub);

//  SET VALUES //

void	set_value(t_cube *cub, int pixel);
void	set_distplayerbox(t_cube *cub);
void	line_start(t_cube *cub);
int		set_color(t_cube *cub);
void	start_dda(t_cube *cub);
void	init_vars(t_cube *cub);
void	update_vars(t_cube *cub);
void	set_dir(t_cube *cub, char pos);

// SET HOOKS //

void	init_hooks(t_cube *cub);

#endif
