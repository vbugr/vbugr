NAME    :=  minilibmx.a
HNAME   :=  header.h
FUN     :=  mx_atoi.c mx_isdigit.c mx_isspace.c mx_printchar.c \
            mx_printint.c mx_printstr.c mx_strlen.c mx_strcpy.c \
            mx_strcmp.c
SRC     := ./src/
CC      := clang
FLAGS   := -std=c11 -Wall -Wextra -Werror -Wpedantic -c -Ofast
INC     := $(addprefix -I, ./inc/)
OBJD    := ./obj/
OBJS    := $(FUN:.c=.o)
OBJ     := $(addprefix $(OBJD), $(OBJS))
all: $(NAME)
$(NAME): ./inc/$(HNAME) $(OBJ)
        @ar rc $(NAME) $(OBJ)
        @ranlib $(NAME)
        @echo $(NAME) "\033[0;33m ready"
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
Collapse
