/*
** check_line.c for sudoki-bi in /home/cardon_v/Documents/Tek-1/B02/Rush
**
** Made by Valentin Cardon
** Login   <cardon_v@epitech.net>
**
** Started on  Fri Feb 28 22:37:57 2014 Valentin Cardon
** Last update Sun Mar  2 17:21:56 2014 Jérémy MATHON
*/

#include	"../include/my_sudoki.h"

int		check_line(char **map, int k, int i)
{
  int		j;

  j = 0;
  while (j < 9)
    {
      if (map[i][j] == k)
	return (0);
      j++;
    }
  return (1);
}

int		check_colone(char **map, int k, int j)
{
  int		i;

  i = 0;
  while (i < 9)
    {
      if (map[i][j] == k)
	return (0);
      i++;
    }
  return (1);
}

int		check_bloc(char **map, int k, int i, int j)
{
  int		ibis;
  int		jbis;

  ibis = 3 * (i / 3);
  jbis = 3 * (j / 3);
  i = ibis;
  j = jbis;
  while (i < (ibis + 3))
    {
      while (j < (jbis + 3))
	{
	  if (map[i][j] == k)
	    return (0);
	  j++;
	}
      j = jbis;
      i++;
    }
  return (1);
}
