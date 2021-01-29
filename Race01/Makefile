NAME	:=	minilibmx.a
HNAME	:=	header.h
FUN		:=	mx_printchar.c main.c
SRC		:= ./src/
CC		:= clang
FLAGS	:= -std=gnu99 -Wall -Wextra -Werror -Wpedantic -c -Ofast
INC		:= $(addprefix -I, ../inc/)
OBJD	:= ./obj/
OBJS	:= $(FUN:.c=.o)
OBJ		:= $(addprefix $(OBJD), $(OBJS))
MVRUNNERO = mv $(PROGRAMNAME).o $(OBJD)

RUNNERFILE	:=	main.c
PROGRAMNAME	:=	matrix_rain.out

all: $(NAME)

$(NAME): ./inc/$(HNAME) $(OBJ)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)
		@echo $(NAME) "\033[0;33m ready"
		@$(CC) $(FLAGS) $(addprefix $(SRC), $(RUNNERFILE)) -o $(PROGRAMNAME).o
		@$(CC) -o $(PROGRAMNAME) $(PROGRAMNAME).o -L. $(NAME) -lncurses
		@$(MVRUNNERO)

$(OBJD)%.o: $(SRC)%.c
	@mkdir -p $(OBJD)
	@$(CC) $(FLAGS) $(INC) -o $@ $<

clean:
	rm -rf $(OBJD)
	@echo "Objects deleted"

uninstall:
	rm -rf $(NAME)
	@echo $(NAME) "deleted"

reinstall: uninstall all
