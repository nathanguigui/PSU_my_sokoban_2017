#ifndef SOKOBAN_H
#define SOKOBAN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>

typedef struct coord{
	int coord_x;
	int coord_y;	
} coord;

int	my_putstr(char const *str);
int my_putchar(char c);
int my_put_nbr(int nb);
//core.c
char **detect_event(int key, char **game_map, char **original_map, coord pos);
int sokoban(char *path);
//error.c
int	error_folder(char *name);
int	error_fatal(char *name);
//file_to_map.c
void check_map(char *map);
char *get_map(char *path);
//lib_game.c
int show_map(char **matrix_map);
coord get_player_pos(char **matrix_map);
int game_win(char **matrix_map);
//map_to_game.c
int size_of_line(char *map);
int size_of_col(char *map);
char **map_to_matrix(char *map);
//movement.c
void move_player_left(char **original_map, char **game_map, coord pos);
void move_player_right(char **original_map, char **game_map, coord pos);
void move_player_up(char **original_map, char **game_map, coord pos);
void move_player_down(char **original_map, char **game_map, coord pos);

#endif