/*
** EPITECH PROJECT, 2020
** B-MUL-100-NAN-1-1-myhunter-victor.harri-chal
** File description:
** init_struct.c
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

obj_t init_struct(void)
{
    obj_t obj;
    sfVideoMode mode = { 1280, 769, 60 };

    obj.window = sfRenderWindow_create(mode, "My_Hunter", sfClose, \
    NULL);
    obj.tex_stage = sfTexture_createFromFile("./assets/stage.png", NULL);
    obj.sp_stage = sfSprite_create();
    obj.tex_rect = sfTexture_createFromFile("./assets/duck.png", NULL);
    obj.sp_rect = sfSprite_create();
    obj.clock = sfClock_create();
    obj.music = sfMusic_createFromFile("./assets/music.ogg");
    return (obj);
}
