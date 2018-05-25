/*
** EPITECH PROJECT, 2017
** movement.c
** File description:
** 
*/

int can_move_to(char **map, coord pos)
{
	int x = pos.coord_x;
	int y = pos.coord_y;
	if (map[y][x] == '#')
		return (0);
	else
		return (1);
}

void move_player_left(char **original_map, char **game_map, coord pos)
{
	int x = pos.coord_x;
	int y = pos.coord_y;
	char temp;
	coord dest = pos;
	dest.coord_x = dest.coord_x - 1;

	if (x > 0 && game_map[y][x - 1] != '#') {
		if (game_map[y][x - 1] == 'X') {
			if (game_map[y][x - 2] != '#' &&
			    game_map[y][x - 2] != 'X') {
				game_map[y][x - 1] = 'P';
				if (original_map[y][x] == 'O')
					game_map[y][x] = 'O';
				else
					game_map[y][x] =
					    ' ';
				game_map[y][x - 2] = 'X';
			}
		} else {
			game_map[y][x - 1] = 'P';
			if (original_map[y][x] == 'O')
				game_map[y][x] = 'O';
			else
				game_map[y][x] = ' ';
		}
	}
}

void move_player_right(char **original_map, char **game_map, coord pos)
{
	int x = pos.coord_x;
	int y = pos.coord_y;
	char temp;
	coord dest = pos;
	dest.coord_x = dest.coord_x + 1;

	if (game_map[y][x + 1] != '#') {
		if (game_map[y][x + 1] == 'X') {
			if (game_map[y][x + 2] != '#' &&
			    game_map[y][x + 2] != 'X') {
				game_map[y][x + 1] = 'P';
				if (original_map[y][x] == 'O')
					game_map[y][x] =
					    'O';
				else
					game_map[y][x] =
					    ' ';
				game_map[y][x + 2] = 'X';
			}
		} else {
			game_map[y][x + 1] = 'P';
			if (original_map[y][x] == 'O')
				game_map[y][x] = 'O';
			else
				game_map[y][x] = ' ';
		}
	}
}

void move_player_up(char **original_map, char **game_map, coord pos)
{
	int x = pos.coord_x;
	int y = pos.coord_y;
	char temp;
	coord dest = pos;
	dest.coord_y = dest.coord_y - 1;

	if (game_map[y - 1][x] != '#') {
		if (game_map[y - 1][x] == 'X') {
			if (game_map[y - 2][x] != '#' &&
			    game_map[y - 2][x] != 'X') {
				game_map[y - 1][x] = 'P';
				if (original_map[y][x] == 'O')
					game_map[y][x] =
					    'O';
				else
					game_map[y][x] =
					    ' ';
				game_map[y - 2][x] = 'X';
			}
		} else {
			game_map[y - 1][x] = 'P';
			if (original_map[y][x] == 'O')
				game_map[y][x] = 'O';
			else
				game_map[y][x] = ' ';
		}
	}
}

void move_player_down(char **original_map, char **game_map, coord pos)
{
	int x = pos.coord_x;
	int y = pos.coord_y;
	char temp;
	coord dest = pos;
	dest.coord_y = dest.coord_y + 1;

	if (game_map[y + 1][x] != '#') {
		if (game_map[y + 1][x] == 'X') {
			if (game_map[y + 2][x] != '#' &&
			    game_map[y + 2][x] != 'X') {
				game_map[y + 1][x] = 'P';
				if (original_map[y][x] == 'O')
					game_map[y][x] =
					    'O';
				else
					game_map[y][x] =
					    ' ';
				game_map[y + 2][x] = 'X';
			}
		} else {
			game_map[y + 1][x] = 'P';
			if (original_map[y][x] == 'O')
				game_map[y][x] = 'O';
			else
				game_map[y][x] = ' ';
		}
	}
}