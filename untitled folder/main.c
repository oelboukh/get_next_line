#include "get_next_line.h"
int main()
{
    char str[500];
    int fd = open("file.txt", O_RDONLY);
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
}