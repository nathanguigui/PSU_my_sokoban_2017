/*
** EPITECH PROJECT, 2017
** lib_game.c
** File description:
** 
*/

int show_map(char **matrix_map)
{
	int x = 0;
	int y = 0;

	while (matrix_map[y]) {
		move(y, x);
		while (matrix_map[y][x]) {
			addch(matrix_map[y][x]);
			x = x + 1;
			move(y, x);
		}
		x = 0;
		y = y + 1;
	}
	move(0, 0);
	curs_set(0);
	return (0);
}

coord get_player_pos(char **matrix_map)
{
	int i = 0;
	int j = 0;
	coord result;

	while (matrix_map[i]) {
		while (matrix_map[i][j]) {
			if (matrix_map[i][j] == 'P') {
				result.coord_x = j;
				result.coord_y = i;
				break;
			}
			j = j + 1;
		}
		j = 0;
		i = i + 1;
	}
	return(result);
}

int game_win(char **matrix_map)
{
	int i = 0;
	int j = 0;

	while (matrix_map[i]) {
		while (matrix_map[i][j]) {
			if (matrix_map[i][j] == 'O')
				return (0);
			j = j + 1;
		}
		j = 0;
		i = i + 1;
	}
	return(1);
}