/*
** EPITECH PROJECT, 2020
** B-MUL-100-NAN-1-1-myhunter-victor.harri-chal
** File description:
** my_clock.c
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

void my_clock(obj_t obj, score_t score, sfIntRect rect, sfVector2f duck_pos)
{
    sfClock *clock = sfClock_create();
    sfEvent event;

    while (sfRenderWindow_isOpen(obj.window)) {
        obj.time = sfClock_getElapsedTime(clock);
        obj.sec = obj.time.microseconds / 100000.0;
        if (obj.sec > 1) {
            move_rect(&rect, 110, 330);
            sfClock_restart(clock);
        }
        score.i = set_position(&duck_pos, &rect, score.i);
        analyse_events(obj, event, &duck_pos, &score);
        duck_pos = display(obj, duck_pos, rect, &score);
    }
}
