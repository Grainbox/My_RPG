/*
** EPITECH PROJECT, 2022
** structures_collisions.c
** File description:
** all collisions on the map
*/

#include <unistd.h>
#include <stdbool.h>
#include "rpg.h"

bool is_tents_collisions(sfVector2f pos, sfVector2f move)
{
    if ((pos.x + move.x >= 5261 && pos.x + move.x <= 5880 &&
        pos.y + move.y >= 1516 && pos.y + move.y <= 1712) ||
        (pos.x + move.x >= 4444 && pos.x + move.x <= 5066 &&
        pos.y + move.y >= 1580 && pos.y + move.y <= 1761) ||
        (pos.x + move.x >= 3698 && pos.x + move.x <= 4326 &&
        pos.y + move.y >= 1515 && pos.y + move.y <= 1703))
        return true;
    if ((pos.x + move.x >= 3238 && pos.x + move.x <= 3713 &&
        pos.y + move.y >= 1070 && pos.y + move.y <= 1249) ||
        (pos.x + move.x >= 2790 && pos.x + move.x <= 3269 &&
        pos.y + move.y >= 572 && pos.y + move.y <= 743))
        return true;
    if ((pos.x + move.x >= 3562 && pos.x + move.x <= 4188 &&
        pos.y + move.y >= 258 && pos.y + move.y <= 429) ||
        (pos.x + move.x >= 4449 && pos.x + move.x <= 5073 &&
        pos.y + move.y >= 253 && pos.y + move.y <= 443) ||
        (pos.x + move.x >= 5339 && pos.x + move.x <= 5960 &&
        pos.y + move.y >= 278 && pos.y + move.y <= 406))
        return true;
    return false;
}

bool is_wall_collision(sfVector2f pos, sfVector2f move)
{
    if ((pos.x + move.x >= 1360 && pos.x + move.x <= 1670 &&
        pos.y + move.y >= 1250 && pos.y + move.y <= 2380) ||
        (pos.x + move.x >= 1400 && pos.x + move.x <= 1690 &&
        pos.y + move.y >= -200 && pos.y + move.y <= 900) ||
        (pos.x + move.x >= 1400 && pos.x + move.x <= 1690 &&
        pos.y + move.y >= -950 && pos.y + move.y <= -580) ||
        (pos.x + move.x >= 390 && pos.x + move.x <= 1690 &&
        pos.y + move.y >= -950 && pos.y + move.y <= -810) ||
        (pos.x + move.x >= -2000 && pos.x + move.x <= -40 &&
        pos.y + move.y >= -990 && pos.y + move.y <= -880) ||
        (pos.x + move.x >= -2000 && pos.x + move.x <= -1820 &&
        pos.y + move.y >= -990 && pos.y + move.y <= 420))
        return true;
    return false;
}

bool collisions_bis(sfVector2f pos, sfVector2f move)
{
    if ((pos.x + move.x >= 1700 && pos.x + move.x <= 2130 &&
        pos.y + move.y >= -2660 && pos.y + move.y <= -2500) ||
        (pos.x + move.x >= 2920 && pos.x + move.x <= 3210 &&
        pos.y + move.y >= -2280 && pos.y + move.y <= -2160) ||
        (pos.x + move.x >= 2480 && pos.x + move.x <= 3050 &&
        pos.y + move.y >= -1050 && pos.y + move.y <= -910) ||
        (pos.x + move.x >= 2960 && pos.x + move.x <= 3350 &&
        pos.y + move.y >= -620 && pos.y + move.y <= -460) ||
        (pos.x + move.x >= 4390 && pos.x + move.x <= 4670 &&
        pos.y + move.y >= -1310 && pos.y + move.y <= -1210) ||
        (pos.x + move.x >= 5080 && pos.x + move.x <= 5490 &&
        pos.y + move.y >= -1560 && pos.y + move.y <= -1420) ||
        (pos.x + move.x >= 3360 && pos.x + move.x <= 4040 &&
        pos.y + move.y >= -3150 && pos.y + move.y <= -2940) ||
        (pos.x + move.x >= 6030 && pos.x + move.x <= 7800 &&
        pos.y + move.y >= 2060 && pos.y + move.y <= 2500) ||
        (pos.x + move.x >= 7790 && pos.x + move.x <= 9000 &&
        pos.y + move.y >= 1920 && pos.y + move.y <= 2500))
        return true;
    return false;
}

bool is_nature_collision(sfVector2f pos, sfVector2f move)
{
    if ((pos.x + move.x >= 2370 && pos.x + move.x <= 2950 &&
        pos.y + move.y >= 1420 && pos.y + move.y <= 1600) ||
        (pos.x + move.x >= 3220 && pos.x + move.x <= 3520 &&
        pos.y + move.y >= 1590 && pos.y + move.y <= 1650) ||
        (pos.x + move.x >= 2440 && pos.x + move.x <= 2870 &&
        pos.y + move.y >= 2030 && pos.y + move.y <= 2180) ||
        (pos.x + move.x >= 5340 && pos.x + move.x <= 6020 &&
        pos.y + move.y >= 2280 && pos.y + move.y <= 2500) ||
        (pos.y + move.y <= -3400) || (collisions_bis(pos, move)))
        return true;
    return false;
}

bool is_village_collision(sfVector2f pos, sfVector2f move)
{
    if ((pos.x + move.x >= 750 && pos.x + move.x <= 1400 &&
        pos.y + move.y >= 20 && pos.y + move.y <= 340) ||
        (pos.x + move.x >= -1210 && pos.x + move.x <= -530 &&
        pos.y + move.y >= -430 && pos.y + move.y <= -120) ||
        (pos.x + move.x >= -1760 && pos.x + move.x <= -1100 &&
        pos.y + move.y >= 390 && pos.y + move.y <= 690) ||
        (pos.x + move.x >= -1950 && pos.x + move.x <= -110 &&
        pos.y + move.y >= 1840 && pos.y + move.y <= 2000) ||
        (pos.x + move.x >= -110 && pos.x + move.x <= 700 &&
        pos.y + move.y >= 1930 && pos.y + move.y <= 2200) ||
        (pos.x + move.x >= 700 && pos.x + move.x <= 1380 &&
        pos.y + move.y >= 2060 && pos.y + move.y <= 2200) ||
        (pos.x + move.x >= 230 && pos.x + move.x <= 1200 &&
        pos.y + move.y >= 1400 && pos.y + move.y <= 2050) ||
        (pos.x + move.x >= -2000 && pos.x + move.x <= -1280 &&
        pos.y + move.y >= 1650 && pos.y + move.y <= 1850) ||
        (pos.x + move.x >= 2320 && pos.x + move.x <= 3010 &&
        pos.y + move.y >= 2050 && pos.y + move.y <= 2350))
        return true;
    return false;
}
