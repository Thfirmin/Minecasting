/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <jsantann@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 23:19:24 by jsantann          #+#    #+#             */
/*   Updated: 2023/05/17 17:21:16 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H
# define PARSE_H

# include "cub3d.h"

int		count_matrix(char **matrix);
int		error_menu(char **argv, int argc);
int		error_permission(char *argv);
int		size_map(char **matrix, int start);
int		start_map(char **matrix);
int		count_space(char *src);
int		count_str(char *src, char *key);
int		count_char(char *src, char key);
int		count_n(char *src, int start);
int		locate_char(char *src, int start, char key);
void	get_file(int fd, t_cube *cub);
void	error_argc(int argc);
void	error_filename(char *argv);
void	free_matrix(char **matrix);
void	print_matrix(t_cube *cub);
char	**get_map(char **matrix);
char	**get_texture_map(char **matrix);
char	**get_colors(char **matrix);
char	*get_resolution(char **matrix);
char	*get_sprite(char **matrix);
char	*create_vector(char *src, int start, int size);
char	*get_north(char **matrix);
char	*get_south(char **matrix);
char	*get_east(char **matrix);
char	*get_west(char **matrix);
char	*get_ceiling(char **matrix);
char	*get_floor(char **matrix);
#endif
