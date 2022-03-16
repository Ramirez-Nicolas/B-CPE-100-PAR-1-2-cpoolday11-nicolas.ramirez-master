/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** 
*/

int my_strlen(char const *str);
char *my_revstr(char *str)
{
    char save;
    int i = 0;
    int c = my_strlen(str) - 1;
    
    while (i < c) {
        save = str[i];
        str[i] = str[c];
        str[c] = save;
        i = i + 1;
        c = c - 1;
    }
    return (str);
}
