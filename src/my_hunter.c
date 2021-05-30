/*
** EPITECH PROJECT, 2020
** B-MUL-100-NAN-1-1-myhunter-victor.harri-chal
** File description:
** my_hunter.c
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

int my_hunter(void)
{
    obj_t obj = init_struct();
    score_t score = init_score();
    sfIntRect rect = set_rect(rect);
    sfVector2f duck_pos = set_random_duck(duck_pos);

    sfMusic_play(obj.music);
    my_clock(obj, score, rect, duck_pos);
    clean(obj);
    return (0);
}