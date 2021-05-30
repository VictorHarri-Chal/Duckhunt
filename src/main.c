/*
** EPITECH PROJECT, 2020
** B-MUL-100-NAN-1-1-myhunter-victor.harri-chal
** File description:
** main.c
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

void usage(void)
{
    my_putstr("This game is an humble prototype of the Duck Hunter game.\n");
    my_putstr("Type ./my_hunter in the command line to play it.\n");
    my_putstr("Your goal is too shot as much duck as you can !\n");
    my_putstr("You have 5 lives, and you earn 100 points  \
    everytime you hit a duck.\n");
    my_putstr("Creator High Score : 3100");
    my_putstr("Good luck !\n");
}

int main(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        usage();
        return (0);
    }
    else
        my_hunter();
    return (0);
}
