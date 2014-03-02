/*
** my_putchar.c for my_putchar in /home/mathon_j/rendu/Piscine-C-lib/my
**
** Made by Jeremy Mathon
** Login   <mathon_j@epitech.net>
**
** Started on  Tue Oct  8 10:26:17 2013 Jeremy Mathon
** Last update Sun Mar  2 15:34:08 2014 Jérémy MATHON
*/

#include	<unistd.h>
#include	"../include/my_sudoki.h"

void	my_putchar(char c)
{
  if ((write(1, &c, 1) == -1))
      my_putstr("Error to write.\n");
}
