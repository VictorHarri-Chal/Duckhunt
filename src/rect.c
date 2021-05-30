/*
** EPITECH PROJECT, 2020
** B-MUL-100-NAN-1-1-myhunter-victor.harri-chal
** File description:
** rect.c
*/

#include "../include/my.h"
#include "../include/my_hunter.h"

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left += offset;
    if (rect->left == max_value)
        rect->left = 0;
}

sfIntRect set_rect(sfIntRect rect)
{
    rect.top = 0;
    rect.left = 0;
    rect.width = 110;
    rect.height = 110;
    return (rect);
}
