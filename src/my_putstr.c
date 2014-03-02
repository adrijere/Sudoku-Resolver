/*
** my_putstr.c for my_putstr.c in /home/mathon_j/rendu/Piscine-C-Jour_04
**
** Made by Jeremy Mathon
** Login   <mathon_j@epitech.net>
**
** Started on  Thu Oct  3 11:31:10 2013 Jeremy Mathon
** Last update Fri Feb 28 22:37:48 2014 Jérémy MATHON
*/

#include	"../include/my_sudoki.h"

void	my_putstr(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      my_putchar(str[a]);
      a++;
    }
}
