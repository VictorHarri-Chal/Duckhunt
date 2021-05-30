/*
** EPITECH PROJECT, 2020
** B-MUL-100-NAN-1-1-myhunter-victor.harri-chal
** File description:
** position.c
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

int set_position(sfVector2f *duck_pos, sfIntRect *rect, int i)
{
    duck_pos->x += i;
    if (duck_pos->x >= 1280) {
        rect->top = 110;
        i = -i;
    }
    if (duck_pos->x <= -200) {
        rect->top = 0;
        i = -i;
    }
    return (i);
}

sfVector2f set_random_duck(sfVector2f duck_pos)
{
    int nbgen = rand() % 500 + 10;
    duck_pos.x = -200;
    duck_pos.y = nbgen;
    return (duck_pos);
}