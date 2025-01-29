/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 13:32:55 by duandrad          #+#    #+#             */
/*   Updated: 2024/12/27 12:27:59 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "minilibx-linux/mlx.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <math.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
#endif

# ifndef SPRITE_SIZE
#  define SPRITE_SIZE 40
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct s_wall
{
	int	x;
	int	y;
}	t_wall;

typedef struct s_img
{
	void *img;
	char *adress;
	int bits_per_pixel;
	int line_length;
	int endian;
	int width;
	int height;
}	t_img;

typedef struct s_player
{
	int		x;
	int		y;
}	t_player;

typedef struct s_game
{

	t_img *img;
	t_img *canvas;
	void *mlx;
	void *display;
	void *window;
	t_player player;
	int width;
	int height;
	t_img	*wall_img;
	t_list	*wall_list;
}	t_game;

typedef struct s_point
{
	int x;
	int y;
}	t_point;

t_game	*ft_data();
t_img *ft_load_image(char * path);
int ft_move(int key);
int ft_loop();
t_img *ft_init_canvas();
int	ft_lstsize(t_list *lst);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstlast(t_list *lst);
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
unsigned int 	*get_pixel(t_img *data, int x, int y);
void draw_img(t_img *img, int x, int y);
void	clear_canvas();
char	*get_next_line(int fd);

#endif