/*
** EPITECH PROJECT, 2020
** B-MUL-100-NAN-1-1-myhunter-victor.harri-chal
** File description:
** display.c
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

sfVector2f display(obj_t obj, sfVector2f duck_pos, sfIntRect rect, \
score_t *score)
{

    sfSprite_setTexture(obj.sp_stage, obj.tex_stage, sfTrue);
    sfSprite_setTexture(obj.sp_rect, obj.tex_rect, sfTrue);
    sfSprite_setTextureRect(obj.sp_rect, rect);
    sfSprite_setPosition(obj.sp_rect, duck_pos);
    sfRenderWindow_clear(obj.window, sfBlack);
    sfRenderWindow_drawSprite(obj.window, obj.sp_stage, NULL);
    sfRenderWindow_drawSprite(obj.window, obj.sp_rect, NULL);
    sfRenderWindow_display(obj.window);
    return (duck_pos);
}