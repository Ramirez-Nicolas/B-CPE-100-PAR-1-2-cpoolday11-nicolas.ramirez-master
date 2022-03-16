/*
** EPITECH PROJECT, 2020
** my_params_to_list.c
** File description:
** params to list
*/

#include <stdlib.h>

typedef  struct  linked_list
{
    void *data;
    struct  linked_list *next;
} linked_list_t;

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *base;
    linked_list_t *save = base;
    linked_list_t *vide;

    base = malloc (sizeof(linked_list_t));
    base->data = *av;
    base->next = save;
    av = av + 1;
    while (save->next != NULL) {
        save = vide;
        vide = malloc (sizeof(linked_list_t));
        vide->data = *av;
        save->next;
        av = av + 1;
    }
    if (*av != NULL)
        save->next;
    else
        vide = NULL;
    return (base);
}
