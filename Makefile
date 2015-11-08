NAME = ft_retro
CFLAGS = -Wall -Wextra -Werror
SRCS = Env.class.cpp \
			GameEntity.class.cpp \
			Enemy.class.cpp \
			Player.class.cpp \
			HUD.class.cpp \
			Timer.class.cpp \
			main.cpp

all: make

make:
	g++ $(FLAGS) $(SRCS) -lncurses -o $(NAME)

re: all

fclean:
	rm $(NAME)
