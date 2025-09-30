SRC = src/mx_atoi.c src/mx_isdigit.c src/mx_isspace.c src/mx_printchar.c src/mx_printint.c src/mx_printstr.c src/mx_strcpy.c src/mx_strcmp.c src/mx_strlen.c
OBJ = $(SRC:src/%.c=obj/%.o)
INC = -I inc

all: setup MINILIBMX

setup:
	mkdir -p obj

MINILIBMX: $(OBJ)
	ar rcs minilibmx.a $(OBJ)
	ranlib minilibmx.a

$(OBJ): obj/%.o : src/%.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic $(INC) -c $< -o $@

clean:
	rm -rf obj/*.o

uninstall: clean
	rm -rf obj
	rm -f minilibmx.a

reinstall: uninstall all






