/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 07:56:45 by jsantann          #+#    #+#             */
/*   Updated: 2023/06/20 18:17:11 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

int	is_map(char *str)
{
	int	i;

	i = 0;
	if (str[0] == ' ')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] == '1')
			return (1);
		else
			return (0);
	}
	else if (str[0] == '1')
		return (1);
	else
		return (0);
}

int	start_map(char **matrix)
{
	int		i;

	i = 0;
	while (matrix[i])
	{
		if (is_map(matrix[i]))
			return (i);
		i++;
	}
	return (0);
}

int	size_map(char **matrix, int start)
{
	int	size;

	size = 0;
	while (matrix[start])
	{
		start++;
		size++;
	}
	return (size);
}

int	search_max_len(char **matrix, int start)
{
	int	sub;
	int	temp;
	int	size;

	size = 0;
	sub = 0;
	while (matrix[start])
	{
		temp = 0;
		while (matrix[start][temp])
			temp++;
		if (temp > sub)
			sub = temp;
		start++;
		size++;
	}
	return (sub);
}

char	*ft_specialdup(const char *s1, size_t len)
{
	char	*string;
	char	*dest;
	size_t	i;

	i = 0;
	string = (char *) s1;
	dest = malloc(sizeof(char) * len + 3);
	if (!(dest))
		return (NULL);
	dest[0] = ' ';
	while (string[i] && string[i] != '\n')
	{
		dest[i + 1] = string[i];
		i++;
	}
	i++;
	while (i <= len)
		dest[i++] = ' ';
	dest[i] = '\0';
	return (dest);
}
