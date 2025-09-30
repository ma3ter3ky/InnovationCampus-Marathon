SRC = src/mx_atoi.c src/mx_isdigit.c src/mx_isspace.c src/mx_printchar.c src/mx_printint.c src/mx_printstr.c src/mx_strcpy.c src/mx_strcmp.c src/mx_strlen.c
OBJ = obj/mx_atoi.o obj/mx_isdigit.o obj/mx_isspace.o obj/mx_printchar.o obj/mx_printint.o obj/mx_printstr.o obj/mx_strcpy.o obj/mx_strcmp.o obj/mx_strlen.o
INC = -I inc

all: setup MINILIBMX

setup:
	mkdir -p obj

MINILIBMX: obj/mx_atoi.o obj/mx_isdigit.o obj/mx_isspace.o obj/mx_printchar.o obj/mx_printint.o obj/mx_printstr.o obj/mx_strcpy.o obj/mx_strcmp.o obj/mx_strlen.o
	ar rcs minilibmx.a $(OBJ)
	ranlib minilibmx.a

obj/mx_atoi.o: src/mx_atoi.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic $(INC) -c src/mx_atoi.c -o obj/mx_atoi.o
	
obj/mx_isdigit.o: src/mx_isdigit.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic $(INC) -c src/mx_isdigit.c -o obj/mx_isdigit.o

obj/mx_isspace.o: src/mx_isspace.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic $(INC) -c src/mx_isspace.c -o obj/mx_isspace.o

obj/mx_printchar.o: src/mx_printchar.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic $(INC) -c src/mx_printchar.c -o obj/mx_printchar.o

obj/mx_printint.o: src/mx_printint.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic $(INC) -c src/mx_printint.c -o obj/mx_printint.o

obj/mx_printstr.o: src/mx_printstr.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic $(INC) -c src/mx_printstr.c -o obj/mx_printstr.o

obj/mx_strcpy.o: src/mx_strcpy.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic $(INC) -c src/mx_strcpy.c -o obj/mx_strcpy.o
	
obj/mx_strcmp.o: src/mx_strcmp.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic $(INC) -c src/mx_strcmp.c -o obj/mx_strcmp.o

obj/mx_strlen.o: src/mx_strlen.c
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic $(INC) -c src/mx_strlen.c -o obj/mx_strlen.o

clean:
	rm -rf obj/*.o

uninstall: clean
	rm -rf obj
	rm -f minilibmx.a

reinstall: uninstall all

