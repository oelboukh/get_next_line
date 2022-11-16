#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <string.h>
# include <limits.h>

char	*ft_strchr(const char *s, int c);
char	*get_next_line(int fd);
char	*getln(char *sttc);
char	*readbuff(int fd, char *sttc);
char	*ft_strjoin(char const *s1, char const *s2);
char	*getafterlnx(char *sttc);
char	*ft_strdup(const char *s1);

#endif
