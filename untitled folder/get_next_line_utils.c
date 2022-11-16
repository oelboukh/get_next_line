#include "get_next_line.h"
char *readbuff(int fd, char *sttc)
{
    int i;
    char *str;
	char *temp;
    str = malloc((size_t) BUFFER_SIZE + 1);
    if(!str)
        return(NULL);
    i = read(fd, str, BUFFER_SIZE);
    if(i < 0)
    {
        free(sttc);
		free(str);
        return(NULL);
    }
    while(i > 0)
    {
       str[i] = '\0';
       temp = ft_strjoin(sttc, str);
		free(sttc);
		sttc = temp;
       if(ft_strchr(sttc, '\n'))
            break ;
    i = read(fd, str, BUFFER_SIZE);
    }
	free(str);
	return(sttc);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
			return (((char *)s) + i);
		i++;
	}
	if (s[i] == (char)c)
		return (((char *)s) + i);
	return (0);
}

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dest;

	i = 0;
	while (s1[i])
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	count(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	len_cpy(const char *s1, char *new, int x)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		new[x] = s1[i];
		i++;
		x++;
	}
	return (x);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		x;
	char	*new;
	int		aloc;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (NULL);
	i = 0;
	x = 0;
	i = count(s1);
	x = count(s2);
	aloc = (i + x);
	new = malloc(sizeof(char) * (aloc) + 1);
	if (!new)
		return (NULL);
	i = 0;
	i = len_cpy (s1, new, i);
	i = len_cpy (s2, new, i);
	new[i] = 0;
	return (new);
}
char *getln(char *sttc)
{
    int i;
    int x;
    char *new;

    i = 0;
    x = 0;
	if(sttc[i] == '\0')
		return(NULL);
    while(sttc[i] != '\n' && sttc[i])
        i++;
    new = malloc(i + 2);
    while(x <= i)
        {
            new[x] = sttc[x];
            x++;
        }
        new[x] = '\0';
    return(new);
}
char	*getafterlnx(char *sttc)
{
    int i;
    char *ptr; 
    i = 0;
    while(sttc[i] != '\n' && sttc[i])
        i++;
	if(sttc[i] == '\0')
	{
		free(sttc);
		return(NULL);
	}
    i++;
    ptr = ft_strdup(sttc+i);
    free(sttc);
    return(ptr);
}