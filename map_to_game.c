/*
** EPITECH PROJECT, 2017
** map_to_game.c
** File description:
** 
*/

int size_of_line(char *map)
{
	int i = 0;

	while (map[i] != '\n')
		i = i + 1;
	return (i);
}

int size_of_col(char *map)
{
	int i = 0;
	int k = 0;

	while (map[i] != '\0') {
		if(map[i] == '\n')
			k = k + 1;
		i = i + 1;
	}
	return (k);
}

char **map_to_matrix(char *map)
{
	int size_col = size_of_col(map);
	int size_line = size_of_line(map);
	char **matrix_map = malloc(sizeof(char *) * size_col + 1);
	int i = 0;
	int j = 0;
	int k = 0;

	while (i < size_col) {
		j = 0;
		matrix_map[i] = malloc(sizeof(char) * size_line + 1);
		while (map[k] != '\n') {
			matrix_map[i][j] = map[k];
			k = k + 1;
			j = j + 1; 
		}
		matrix_map[i][j] = '\0';
		k = k + 1;
		i = i + 1;
	}
	matrix_map[i] = '\0';
	return (matrix_map);
}