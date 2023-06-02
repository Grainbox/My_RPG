/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** drawing_conditions
*/

#include "rpg.h"

static bool is_tents_struct(sfVector2f pos)
{
    if ((pos.x >= 5261 && pos.x <= 5880 && pos.y >= 1257 && pos.y <= 1712) ||
        (pos.x >= 4444 && pos.x <= 5066 && pos.y >= 1321 && pos.y <= 1761) ||
        (pos.x >= 3698 && pos.x <= 4326 && pos.y >= 1256 && pos.y <= 1703))
        return true;
    if ((pos.x >= 3238 && pos.x <= 3713 && pos.y >= 811 && pos.y <= 1149) ||
        (pos.x >= 2790 && pos.x <= 3269 && pos.y >= 313 && pos.y <= 743))
        return true;
    if ((pos.x >= 3562 && pos.x <= 4188 && pos.y >= -1 && pos.y <= 429) ||
        (pos.x >= 4449 && pos.x <= 5073 && pos.y >= -6 && pos.y <= 443) ||
        (pos.x >= 5339 && pos.x <= 5960 && pos.y >= 19 && pos.y <= 406))
        return true;
    if ((pos.x >= 1360 && pos.x <= 1670 && pos.y >= 991 && pos.y <= 2380) ||
        (pos.x >= 1400 && pos.x <= 1690 && pos.y >= -459 && pos.y <= 900) ||
        (pos.x >= 1400 && pos.x <= 1690 && pos.y >= -1209 && pos.y <= -580) ||
        (pos.x >= 390 && pos.x <= 1690 && pos.y >= -1468 && pos.y <= -810) ||
        (pos.x >= -2000 && pos.x <= -40 && pos.y >= -1249 && pos.y <= -880) ||
        (pos.x >= -2000 && pos.x <= -1820 && pos.y >= -1249 && pos.y <= 420))
        return true;
    return false;
}

static bool is_deco_struct(sfVector2f pos)
{
    if (pos.x >= -584 && pos.x <= -400 && pos.y >= 1056 && pos.y <= 1382)
        return true;
    if ((pos.x >= 2370 && pos.x <= 2950 && pos.y >= 1161 && pos.y <= 1600) ||
        (pos.x >= 3220 && pos.x <= 3520 && pos.y >= 1331 && pos.y <= 1650) ||
        (pos.x >= 2440 && pos.x <= 2870 && pos.y >= 1771 && pos.y <= 2180) ||
        (pos.x >= 4210 && pos.x <= 5310 && pos.y >= 2091 && pos.y <= 2400) ||
        (pos.x >= 5340 && pos.x <= 5910 && pos.y >= 2021 && pos.y <= 2500) ||
        (pos.x >= 6030 && pos.x <= 7800 && pos.y >= 1762 && pos.y <= 2500) ||
        (pos.x >= 7790 && pos.x <= 9000 && pos.y >= 1661 && pos.y <= 2500) ||
        (pos.x >= 1700 && pos.x <= 2130 && pos.y >= -2919 && pos.y <= -2500) ||
        (pos.x >= 2920 && pos.x <= 3210 && pos.y >= -2529 && pos.y <= -2160) ||
        (pos.x >= 2480 && pos.x <= 3050 && pos.y >= -1309 && pos.y <= -910) ||
        (pos.x >= 2960 && pos.x <= 3350 && pos.y >= -879 && pos.y <= -460) ||
        (pos.x >= 4390 && pos.x <= 4670 && pos.y >= -1529 && pos.y <= -1210) ||
        (pos.x >= 5080 && pos.x <= 5490 && pos.y >= -1819 && pos.y <= -1420) ||
        (pos.x >= 3360 && pos.x <= 4040 && pos.y >= -3409 && pos.y <= -2940))
        return true;
    return false;
}

static bool is_village_struct(sfVector2f pos)
{
    if ((pos.x >= 750 && pos.x <= 1400 && pos.y >= -239 && pos.y <= 340) ||
        (pos.x >= -1210 && pos.x <= -530 && pos.y >= -689 && pos.y <= -120) ||
        (pos.x >= -1760 && pos.x <= -1100 && pos.y >= 131 && pos.y <= 690) ||
        (pos.x >= -1950 && pos.x <= -110 && pos.y >= 1581 && pos.y <= 2000) ||
        (pos.x >= -110 && pos.x <= 700 && pos.y >= 1671 && pos.y <= 2200) ||
        (pos.x >= 700 && pos.x <= 1380 && pos.y >= 1801 && pos.y <= 2200) ||
        (pos.x >= 230 && pos.x <= 1200 && pos.y >= 1141 && pos.y <= 2050) ||
        (pos.x >= -2000 && pos.x <= -1280 && pos.y >= 1441 && pos.y <= 1850) ||
        (pos.x >= 1600 && pos.x <= 2320 && pos.y >= 2000 && pos.y <= 3000) ||
        (pos.x >= 2990 && pos.x <= 6100 && pos.y >= 2050 && pos.y <= 3000))
        return true;
    return false;
}

bool is_structure(global *all)
{
    sfVector2f pos = {all->game.img[0].pos_x, all->game.img[0].pos_y};

    if ((pos.x <= 1083 && pos.x >= 330 && pos.y >= 1160 && pos.y <= 1600) ||
        (pos.x <= -1320 && pos.y >= 1100 && pos.y <= 1600) ||
        (pos.x >= 4476 && pos.x <= 4730 && pos.y >= 750 && pos.y <= 1090) ||
        (pos.x >= 3018 && pos.x <= 3391 && pos.y >= -3217 && pos.y <= -2886))
        return true;
    if (pos.x >= -200 && pos.x <= 160 &&
        pos.y >= 400 && pos.y <= 650)
        return true;
    if (is_village_struct(pos))
        return true;
    if (is_tents_struct(pos))
        return true;
    if (is_deco_struct(pos))
        return true;
    return false;
}

bool is_npc_close(global *all)
{
    sfVector2f pos = {all->game.img[0].pos_x, all->game.img[0].pos_y};

    if (pos.x >= 4300 && pos.x <= 4844 && pos.y >= 800 && pos.y <= 1200)
        return true;
    if (pos.x >= -726 && pos.x <= -161 && pos.y >= 1133 && pos.y <= 1604)
        return true;
    if (pos.x >= 2970 && pos.x <= 3360 && pos.y >= -3060 && pos.y <= -2790)
        return true;
    return false;
}
