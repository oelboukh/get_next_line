/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelboukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:19:50 by oelboukh          #+#    #+#             */
/*   Updated: 2022/11/16 14:31:04 by oelboukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
int main()
{
   int fd = open("file.txt", O_RDONLY);
   printf("%s", get_next_line(fd));
   printf("%s", get_next_line(fd));
   printf("%s", get_next_line(fd));
   printf("%s", get_next_line(fd));
}
