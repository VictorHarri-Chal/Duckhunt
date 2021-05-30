/*
** EPITECH PROJECT, 2020
** B-MUL-100-NAN-1-1-myhunter-victor.harri-chal
** File description:
** analyse_events.c
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

void analyse_events(obj_t obj, sfEvent event, sfVector2f *duck_pos,
score_t *score)
{
    sfRenderWindow_setFramerateLimit(obj.window, 60);
    while (sfRenderWindow_pollEvent(obj.window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(obj.window);
        if (event.type == sfEvtMouseButtonPressed)
            manage_mouse_click(event.mouseButton, duck_pos, obj, \
            score);
    }
}
