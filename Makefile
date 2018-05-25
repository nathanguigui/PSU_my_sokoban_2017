##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

SRC	=	*.c

all:
	@gcc -lncurses *.c -include ./include/my_sokoban.h -o my_sokoban
	@echo "complete"
clean:
	@echo "clean done"

re:	all
	@echo "re done"