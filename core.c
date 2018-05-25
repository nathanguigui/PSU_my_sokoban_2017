/*
** EPITECH PROJECT, 2017
** core.c
** File description:
** 
*/

char **detect_event(int key, char **game_map, char **original_map, coord pos)
{
	switch (key) {
		case KEY_UP:
			move_player_up(original_map, game_map, pos);
			break;
		case KEY_DOWN:
			move_player_down(original_map, game_map, pos);
			break;
		case KEY_RIGHT:
			move_player_right(original_map, game_map, pos);
			break;
		case KEY_LEFT:
			move_player_left(original_map, game_map, pos);
			break;
		case 32:
			return (original_map);
	}
	return (game_map);
}

int sokoban(char *path)
{
	char *txt_map = (get_map(path));
	char **original_map = map_to_matrix(txt_map);
	char **game_map = original_map;
	original_map = game_map;
	int key;
	coord pos = get_player_pos(game_map);

	initscr();
	echo();
	keypad(stdscr, TRUE);
	show_map(original_map);
	while (game_win(game_map) != 1 ) {
		show_map(game_map);
		key = getch();
		game_map = detect_event(key, game_map, original_map, pos);
		pos = get_player_pos(game_map);
	}
	show_map(game_map);
	getch();
	endwin();
	return (0);
}