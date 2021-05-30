/*
** EPITECH PROJECT, 2020
** B-MUL-100-NAN-1-1-myhunter-victor.harri-chal
** File description:
** my_hunter.h
*/

#ifndef	_MY_HUNTER_H_
#define _MY_HUNTER_H_

#include "my.h"

typedef struct obj {
    sfRenderWindow *window;
    sfTexture *tex_stage;
    sfSprite *sp_stage;
    sfTexture *tex_rect;
    sfSprite *sp_rect;
    sfClock *clock;
    sfVector2f duck_pos;
    sfTime time;
    sfMusic *music;
    float sec;
} obj_t;

typedef struct score {
    int score;
    int life;
    int i;
} score_t;

score_t init_score(void);
obj_t init_struct(void);
int my_hunter(void);
void analyse_events(obj_t obj, sfEvent event, sfVector2f *duck_pos, \
score_t *score);
sfVector2f display(obj_t obj, sfVector2f duck_pos, sfIntRect rect, \
score_t *score);
int set_position(sfVector2f *duck_pos, sfIntRect *rect, int i);
sfVector2f set_random_duck(sfVector2f duck_pos);
void move_rect(sfIntRect *rect, int offset, int max_value);
sfIntRect set_rect(sfIntRect rect);
void manage_mouse_click(sfMouseButtonEvent event, sfVector2f *duck_pos, \
obj_t obj, score_t *score);
void print_score(score_t *score, char *str , int goal);
void my_clock(obj_t obj, score_t score, sfIntRect rect, sfVector2f duck_pos);
void clean(obj_t obj);

#endif
