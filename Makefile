NAME = so_long.a
SRCS = 
OBJS = 
CC = cc
CC_FLAGS = -g -Wall -Wextra -Werror
MLX_FLAGS = -Lminilibx-linux -lmlx_Linux -lX11 -lXext
INCLUDES = -I/usr/include -Imlx


r:
	cc main.c $(MLX_FLAGS) && ./a.out