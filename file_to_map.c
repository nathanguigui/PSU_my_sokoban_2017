/*
** EPITECH PROJECT, 2017
** file_to_map.c
** File description:
** 
*/

void check_map(char *map)
{
	int x = 0;
	int o = 0;
	int i = 0;
	while (map[i] != '\0') {
		if (map[i] == 'X')
			x = x + 1;
		else if (map[i] == 'O')
			o = o + 1;
		i = i + 1;
	}
	if (x != o)
		error_fatal("boxes != storages");
}

char *get_map(char *path)//marche
{
	int size;
	int fd = open(path, O_RDONLY);
	ioctl(fd, FIONREAD, &size);
	char *map = malloc(size + 1);
	read(fd, map, size + 1);
	map[size] = '\0';
	close(fd);
	check_map(map);
	return (map);
}