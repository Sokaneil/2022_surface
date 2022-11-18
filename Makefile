# E89 Pedagogical & Technical Lab
# project:     Surface
# created on:  2022-11-10 - 14:24 +0100
# 1st author:  sokaneil.sieng - sokaneil.sieng
# description: Makefile

NAME	=	surface

SRCS	=	src/main.c		\
		src/set_pixel.c		\
		src/set_line.c		\
		src/get_ratio.c		\
		src/get_value.c		\
		src/mk_colour.c		\
		src/clear_pixelarray.c	\
		src/project_paralell.c  \
		src/project_isometric.c	\
		src/draw_grid.c		\
		src/terrain.c		\
		src/relief.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-W -Wall -Wextra -Werror -Iinclude/

LDFLAGS	+=	-llapin -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system -lstdc++ -lm

RM	=	rm -vf

CC	:=	gcc

ifdef RELEASE
CFLAGS += -O2
endif

ifdef DEBUG
CFLAGS += -g
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re
