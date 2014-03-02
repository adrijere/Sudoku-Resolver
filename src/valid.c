/*
** valid.c for sudoki-bi in /home/cardon_v/Documents/Tek-1/B02/Rush
**
** Made by Valentin Cardon
** Login   <cardon_v@epitech.net>
**
** Started on  Sat Mar  1 15:49:58 2014 Valentin Cardon
** Last update Sun Mar  2 10:47:17 2014 Jérémy MATHON
*/

#include	<stdlib.h>
#include	"../include/my_sudoki.h"

int		valide(char **map, int pos)
{
  int		i;
  int		j;
  int		k;

  i = pos / 9;
  j = pos % 9;
  k = 1;
  if (pos == 81)
    return (0);
  if (map[i][j] != 0)
    return (valide(map, pos + 1));
  while (k <= 9)
    {
      if ((check_line(map, k, i) == 0)
	  && (check_colone(map, k, j) == 0) && (check_bloc(map, k, i, j) == 0))
	{
	  map[i][j] = k;
	  if (valide(map, pos + 1))
	    return (0);
	}
      k++;
    }
  map[i][j] = 0;
  return (1);
}
