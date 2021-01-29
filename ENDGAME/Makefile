#directories
IDIR = inc
ODIR = obj
SDIR = src
LDIR = lib
#compiler settings
CC = clang
CFLAGS= -I $(IDIR)
#set -std=c11 for general purposes, and -std=gnu99 for ubuntu 20
CCFLAGS = -std=gnu99 -Wall -Wextra -Werror -Wpedantic -I $(IDIR)
#dependencies
EXECUTABLE = endgame
#libs
LIBS =	 -lncurses $(LIB_NAME)
LIBS_AWS = -lncurses $(LIB_NAME)
#headers
_DEPS = main.h character.h controls.h menu.h platforms.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))
#objects
# file with main and environment.o MUST BE included
_OBJ = main.o character.o controls.o environment.o menu.o platforms.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))
#make objects
$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
		mkdir -p obj
		$(CC) -c -o $@ $< $(CCFLAGS)
#make excecutable
$(EXECUTABLE): $(OBJ) 
		$(CC) -o $@ $^ $(CCLAGS) $(LIBS)


#build library
#$(LIB_NAME):
#   mkdir -p lib
#   cp src/$(LIB_FILES).c lib
#   $(CC) $(CFLAGS) -I inc -c lib/$(LIB_FILES).c
#   mv $(LIB_FILES).o lib
#   ar rcs $(LIB_NAME) lib/$(LIB_FILES).o
#   rm -rf lib
.PHONY: clean uninstall reinstall
#delete all files
uninstall: clean
		rm -f $(LIB_NAME)
		rm -f $(EXECUTABLE)
		rm -rf $(LDIR)
#remove all temporary files
clean:
		rm -rf $(ODIR)
		rm -f *.a
#rebuild project
reinstall: uninstall all
