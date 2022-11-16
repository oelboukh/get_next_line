#include "get_next_line.h"
char *get_next_line(int fd)
{
   static char *sttc;
   char *line;
   if(fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    sttc = readbuff(fd, sttc);
    if (sttc == NULL)
        return (NULL);
    line = getln(sttc);
    sttc = getafterlnx(sttc);
   return(line);
}