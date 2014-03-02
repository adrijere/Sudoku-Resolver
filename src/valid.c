/*
** valid.c for sudoki-bi in /home/cardon_v/Documents/Tek-1/B02/Rush
**
** Made by Valentin Cardon
** Login   <cardon_v@epitech.net>
**
** Started on  Sat Mar  1 15:49:58 2014 Valentin Cardon
** Last update Sun Mar  2 17:26:20 2014 Jérémy MATHON
*/

#include	<stdlib.h>
#include	"../include/my_sudoki.h"

int		valide(char **map, int pos)
{
  int		i;
  int		j;
  int		k;

  if (pos == 9 * 9)
    return (1);
  i = pos / 9;
  j = pos % 9;
  if (map[i][j] != '0')
    return (valide(map, pos + 1));
  k = 0;
  while (++k <= 9)
    {
      if ((check_line(map, k + 48, i) && check_colone(map, k + 48, j)
	   && check_bloc(map, k + 48, i, j)))
	{
	  map[i][j] = k + 48;
	  if (valide(map, pos + 1))
	    return (1);
	}
    }
  map[i][j] = '0';
  return (0);
}
