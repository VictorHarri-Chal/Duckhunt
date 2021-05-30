/*
** EPITECH PROJECT, 2020
** B-MUL-100-NAN-1-1-myhunter-victor.harri-chal
** File description:
** clean.c
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

void clean(obj_t obj)
{
    sfRenderWindow_destroy(obj.window);
    sfTexture_destroy(obj.tex_stage);
    sfTexture_destroy(obj.tex_rect);
    sfSprite_destroy(obj.sp_stage);
    sfSprite_destroy(obj.sp_rect);
    sfMusic_destroy(obj.music);
}