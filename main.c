/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** 
*/

int main(int argc, char const *argv[])
{
	int fd = open(argv[1], S_IROTH);

	if(argc != 2)
		return (84);
	if(fd == -1) {
		error_folder(argv[1]);
		return (84);
	}
	else {
		sokoban(argv[1]);
	}
	close(fd);
	return (0);
}