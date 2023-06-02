/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** int_to_str
*/

void int_to_str(char *str, unsigned int number)
{
    int to_number = number;
    int gap = 0;
    int count = 0;

    if (number == 0) {
        str[count] = '0';
        count++;
    }
    while (to_number > 0) {
        to_number /= 10;
        count++;
    }
    for (int i = 0; i < count; i++) {
        gap = number % 10;
        number /= 10;
        str[count - (i + 1)] = gap + '0';
    }
    str[count] = '\0';
}
