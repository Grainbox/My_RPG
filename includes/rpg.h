/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-tom.daniel
** File description:
** rpg
*/

#ifndef RPG_H_
    #define RPG_H_

    #include "my.h"
    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>
    #include <stdlib.h>
    #include <SFML/Graphics/Rect.h>
    #include <SFML/Window.h>
    #include <SFML/System.h>
    #include <SFML/System/Clock.h>
    #include <stdio.h>
    #include <stdbool.h>
    #include <time.h>
    #include "struct.h"

    #define sfCf sfTexture_createFromFile
    #define sfWc sfRenderWindow_create

    #define GLOBAL global all
    #define WINDOW all->window
    #define iMain all->main_menu.img_main
    #define iGame all->game.img
    #define iPause all->game.img_pause
    #define iStatus all->game.img_status
    #define iInv all->inventory.img_inv
    #define iSet all->setting.img
    #define iSet_display all->setting.display
    #define iRagnar = all->game.npc.ragnar_talk;
    #define EVENT all->game.event
    #define iFight all->game.fight
    #define iNPC all->game.npc_img
    #define iBUFFER all->game.f_buffer
    #define iFBUFFER all->game.f_buffer.framebuffer
    #define BUFFSIZE 5000, 5000, 0, 0

/* MAIN */
    void init_all(global *all);
    void frees(global *all);

/* MAIN MENU */
    int main_menu(global *all);

/* GAME */
    void init_main_menu_content(global *all);
    int game(global *all);
    void init_game_content(global *all);
    void init_music(global *all);
    void init_ragnar_text(global *all);
    void init_lucien_text(global *all);
    bool is_npc_close(global *all);
    int which_npc_close(global *all);
    void init_alys_text(global *all);
    void draw_game(global *all, int is_npc_open);

/* COLLISION */
    void init_collision(global *all, double tmp);
    bool is_complex_collision(global *all, sfVector2f pos, sfVector2f move);
    bool is_collision(global *all, sfVector2f pos, sfVector2f move);
    bool is_deco_collision(sfVector2f pos, sfVector2f move);
    bool is_structure(global *all);
    bool is_tents_collisions(sfVector2f pos, sfVector2f move);
    bool is_wall_collision(sfVector2f pos, sfVector2f move);
    bool collisions_bis(sfVector2f pos, sfVector2f move);
    bool is_nature_collision(sfVector2f pos, sfVector2f move);
    bool is_village_collision(sfVector2f pos, sfVector2f move);

/* FIGHT */
    void fight(global *all);
    void init_fight(global *all);
    void init_fight_texts(global *all);
    void init_stats(global *all);
    int get_attack(global *all);
    void log_fight_bar(global *all);
    void my_health_bar(global *all);
    void enemy_health_bar(global *all);
    void init_attack_text(global *all);
    void enemy_back_bar(global *all);
    void my_back_bar(global *all);
    void display_attack_text(global *all);
    void display_enemy_attack(global *all);
    void display_loose(global *all);
    void display_win(global *all);
    int is_win_loose(global *all);
    void fight_process(global *all);
    void init_fight_values(global *all);
    void init_boss_values(global *all);
    void draw_enemy_attack(global *all);
    void draw_char_attack(global *all);
    void fight_boss_process(global *all);
    int get_char_attack(global *all);
    void boss_fight(global *all);
    void init_boss_fight(global *all);

/* FRAMEBUFFER */
    void clear_framebuffer(global *all);
    void put_pixel(global *all, int x, int y, sfColor color);
    void firecamp_particles(global *all);
    void tree_particles(global *all);

/* NPC */
    void draw_game_back(global *all);
    void speak_ragnar(global *all);
    void init_ragnar_content(global *all);
    void init_ragnar_dialogue(global *all);
    void increment_dial(int *dial, int win);
    void increment_lucien_dial(int *dial);
    void increment_alys_dial(int *dial);
    void increment_boss_dial(int *dial);
    void init_lucien_dialogue(global *all);
    void init_lucien_dialogue2(global *all);
    void init_lucien_dialogue3(global *all);
    void init_lucien_content(global *all);
    void speak_lucien(global *all);
    void init_alys_dialogue(global *all);
    void init_alys_dialogue2(global *all);
    void init_alys_dialogue3(global *all);
    void init_alys_content(global *all);
    void speak_alys(global *all);
    void init_boss_dialogue(global *all);
    void init_boss_dialogue2(global *all);
    void init_boss_dialogue3(global *all);
    void init_boss_content(global *all);
    void speak_boss(global *all);
    void init_boss(global *all);
    int which_npc_close(global *all);

/* MOVEMENTS */
    void movements(global *all);
    bool is_deco_collision(sfVector2f pos, sfVector2f move);
    void player_moves(global *all, sfVector2f *move, int speed);

/* INVENTORY */
    int inventory(global *all);
    void init_inventory_menu_content(global *all);

/* PAUSE */
    int my_pause(global *all);
    void init_pause_content(global *all);
    void is_resume_clicked(global *all, int *resume);
    void is_setting_clicked(global *all, int *resume);
    void is_status_clicked(global *all, int *resume);
    void is_quit_clicked(global *all);
    void is_back_clicked(global *all);
    void init_status_button(global *all);
    void init_back_button(global *all);

/* SETTINGS */
    int setting(global *all, int *resume);
    void init_settings_menu_content(global *all);

/* STATUS */
    void init_status_content(global *all);
    void my_status(global *all, int *resume);
    void init_stats_text(global *all);

/* TOOLS */
    void my_wait(float second);
    void int_to_str(char *str, unsigned int number);
    void my_sprintf(char *str, char *buffer, ...);
#endif
