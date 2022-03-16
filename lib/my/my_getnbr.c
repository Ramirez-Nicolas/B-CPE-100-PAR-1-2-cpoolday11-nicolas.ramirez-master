/*
** EPITECH PROJECT, 2020
** my_getnbr.c
** File description:
** 
*/

#include <unistd.h>
#include <stdio.h>

int my_getnbr(char const *str)
{
    int i = 0;
    int c = 0;
    int result = 0;

    while(str[i] >= '0' && str[i] <= '9') {
        c = str[i] - '0';
        result = result * 10 + c;
        i++;
    }
    return (result);
}
