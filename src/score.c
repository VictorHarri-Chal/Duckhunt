/*
** EPITECH PROJECT, 2020
** B-MUL-100-NAN-1-1-myhunter-victor.harri-chal
** File description:
** score.c
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

score_t init_score(void)
{
    score_t score;

    score.score = 0;
    score.life = 5;
    score.i = 4;
    return (score);
}

void print_score(score_t *score, char *str , int goal)
{
    my_putstr(str);
    if (goal == 1)
        my_put_nbr(score->score);
    else if (goal == 2)
        my_put_nbr(score->life);
    my_putchar('\n');
}

void manage_mouse_click(sfMouseButtonEvent event, sfVector2f *duck_pos,
obj_t obj, score_t *score)
{
    int nbgen = rand() % 500 + 10;
    sfMusic *shot = sfMusic_createFromFile("./assets/shot.ogg");

    if (event.x >= duck_pos->x && event.x <= duck_pos->x + 110 && \
    event.y >= duck_pos->y && event.y <= duck_pos->y + 110)
    {
        duck_pos->x = -199;
        duck_pos->y = nbgen;
        sfMusic_play(shot);
        score->score = score->score + 100;
        print_score(score, "GOT IT! Score = ", 1);
        score->i += 1;
    } else if (score->life > 0) {
        score->life = score->life - 1;
        print_score(score, "MISS! Lives left: ", 2);
    } if (score->life == 0) {
        print_score(score, "-----------------\nYour Score: ", 1);
        sfRenderWindow_close(obj.window);
        sfMusic_destroy(shot);
    }
}
