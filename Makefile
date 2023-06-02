##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile that build the project
##

NAME	=		my_rpg

CFLAGS	= 		-W -Wall -Wextra -I includes -g

SRC		=		./src/main_rpg.c								\
				./src/main_menu/main_menu.c						\
				./src/main_menu/init.c							\
				./src/game/main_game.c 							\
				./src/game/init/init.c 							\
				./src/game/init/init_02.c 						\
				./src/game/init/init_03.c						\
				./src/game/movements/movements.c				\
				./src/game/movements/player_moves.c 			\
				./src/game/collision/collision.c				\
				./src/game/collision/structures_collisions.c	\
				./src/game/collision/which_npc_close.c			\
				./src/game/collision/init_collision.c			\
				./src/inventory_menu/init.c 					\
				./src/inventory_menu/inventory_menu.c 			\
				./src/pause/pause.c								\
				./src/pause/pause2.c							\
				./src/pause/init.c								\
				./src/pause/init2.c								\
				./src/tools/my_wait.c							\
				./src/setting_menu/init.c 						\
				./src/setting_menu/setting_menu.c     			\
				./src/status/init.c								\
				./src/status/status.c							\
				./src/status/init2.c							\
				./src/tools/int_to_str.c						\
				./src/tools/my_sprintf.c						\
				./src/game/draw/drawing_conditions.c			\
				./src/game/npc/ragnar/speak.c					\
				./src/game/npc/ragnar/init.c					\
				./src/game/fight/init/init.c					\
				./src/game/fight/init/init2.c					\
				./src/game/fight/fight.c						\
				./src/game/fight/init/init_texts.c				\
				./src/game/fight/attack.c						\
				./src/game/fight/init/init_attack_text.c		\
				./src/game/fight/display_win_loose.c			\
				./src/game/fight/display_enemy_attack.c			\
				./src/game/fight/display_attack_text.c			\
				./src/game/fight/init/init_fight_values.c		\
				./src/game/npc/ragnar/increment_dial.c			\
				./src/game/npc/lucien/init.c					\
				./src/game/npc/lucien/speak.c					\
				./src/game/npc/lucien/increment_lucien_dial.c	\
				./src/game/npc/alys/init.c						\
				./src/game/npc/alys/speak.c						\
				./src/game/npc/alys/increment_alys_dial.c		\
				./src/game/npc/boss/init.c						\
				./src/game/npc/boss/speak.c						\
				./src/game/npc/boss/increment_boss_dial.c		\
				./src/game/npc/boss/fight/init/init.c			\
				./src/game/npc/boss/fight/init/init_texts.c		\
				./src/game/npc/boss/fight/display_enemy_attack.c\
				./src/game/npc/boss/fight/display_attack_text.c	\
				./src/game/npc/boss/fight/attack.c				\
				./src/game/npc/boss/fight/fight.c				\
				./src/game/framebuffer/put_pixel.c				\
				./src/game/collision/complex_collision.c		\
				./src/game/framebuffer/clear_buffer.c			\
				./src/game/framebuffer/particles.c				\
				./src/game/draw/draw.c							\

OBJ		=		$(SRC:.c=.o)

CSFML	=		-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

LIB	=	-L lib/my -lmy

ARCH	=	/usr/bin/arch -x86_64

all:	$(OBJ)
	make -C lib/my/
	gcc $(OBJ) -o $(NAME) $(CFLAGS) $(CSFML) $(LIB)


apple:	$(OBJ)
	$(ARCH) make -C lib/my/
	$(ARCH) gcc $(SRC) -o $(NAME) $(CFLAGS) $(CSFML) $(LIB)

clean:
		rm -f $(OBJ)
		rm -f *~
		rm -f vgcore*
		rm -f .DS_Store
		rm -f -dr .vscode

fclean:	clean
		make fclean -C lib/my/
		rm -f $(NAME)

debug:	CFLAGS+= -g
debug:	all

perf:	fclean
perf:	CFLAGS+= -pg
perf:	all

re:	fclean all

.PHONY:	all apple clean fclean debug perf re