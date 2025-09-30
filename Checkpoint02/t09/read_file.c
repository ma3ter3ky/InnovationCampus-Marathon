#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[]){
    if(argc != 2){
        write(2, "usage: ./read_file [file_path]\n", 31);
        return -1;
    }
    int bytes_read;
    int file_open = open(argv[1], O_RDONLY);
    if(file_open < 0){
        write(2, "error\n", 6);
        return -1;
    }
    char buffer;
    while ((bytes_read = read(file_open, &buffer, 1) > 0)) {
        write(1, &buffer, 1);
        if(bytes_read < 0) {
            write(2, "error\n", 6);
            return -1;
        }
    }
    close(file_open);
    return 0;
}





