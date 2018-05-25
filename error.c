/*
** EPITECH PROJECT, 2017
** error.c
** File description:
** 
*/

int	error_folder(char *name)
{
	my_putstr("file/folder error:\n");
	my_putstr(name);
	my_putstr("\tis not a file or a directory\n");
	exit(84);
}

int	error_fatal(char *name)
{
	my_putstr("there is a fatal error:\n");
	my_putstr(name);
	my_putchar('\n');
	exit(84);
}